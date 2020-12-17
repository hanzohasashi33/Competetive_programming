#include <algorithm>
#include <vector>
#include <iostream>
typedef std::vector<unsigned int> Dice;
const Dice Sides = { 0,1,2,3,4,5,6,7,8,9 };
const unsigned int Skip = 0;
const unsigned int Take = 1;
const std::vector<unsigned int> Initial = { Skip,Skip,Skip,Skip, Take,Take,Take,Take,Take,Take };
const std::vector<unsigned int> Unused  = { Take };
int main()
{
  unsigned int dices = 2;
  unsigned int limit = 9; 
  std::cin >> limit >> dices;
  const unsigned int AllDices = 3;
  unsigned int maxSquare = 0;
  std::vector<unsigned short> squares;
  for (unsigned int i = 1; i <= limit; i++)
  {
    auto reduce = i*i;
    maxSquare = reduce;
    std::vector<unsigned int> digits;
    for (unsigned int j = 0; j < AllDices; j++)
    {
      auto digit = reduce % 10;
      reduce   /= 10;
      if (digit == 9)
        digit = 6;
      digits.push_back(digit);
    }
    std::sort(digits.begin(), digits.end());
    auto sortedSquare = digits[0] * 100 + digits[1] * 10 + digits[2];
    if (std::find(squares.begin(), squares.end(), sortedSquare) == squares.end())
      squares.push_back(sortedSquare);
  }
  unsigned int valid = 0;
  Dice dice1, dice2, dice3;
  auto open = squares;
  auto permutationDice1 = Initial;
  auto permutationDice2 = Initial;
  auto permutationDice3 = Initial;
  do
  {
    dice1.clear();
    for (size_t i = 0; i < permutationDice1.size(); i++)
      if (permutationDice1[i] == Take)
        dice1.push_back(Sides[i]);
    permutationDice2 = (dices >= 2 ? permutationDice1 : Unused);
    do
    {
      dice2.clear();
      for (size_t i = 0; i < permutationDice2.size(); i++)
        if (permutationDice2[i] == Take)
          dice2.push_back(Sides[i]);
      if (maxSquare >= 100)
      {
        if (std::count(dice1.begin(), dice1.end(), 0) +
            std::count(dice2.begin(), dice2.end(), 0) < 1)
          continue;
      }
      if (maxSquare >= 144)
      {
        if (std::count(dice1.begin(), dice1.end(), 4) +
            std::count(dice2.begin(), dice2.end(), 4) < 1)
          continue;
      }
      permutationDice3 = (dices == 3 ? permutationDice2 : Unused);
      do
      {
        dice3.clear();
        for (size_t i = 0; i < permutationDice3.size(); i++)
          if (permutationDice3[i] == Take)
            dice3.push_back(Sides[i]);
        unsigned int frequency[10] = { 0,0,0,0,0, 0,0,0,0,0 };
        for (auto x : dice1)
          frequency[x]++;
        for (auto x : dice2)
          frequency[x]++;
        for (auto x : dice3)
          frequency[x]++;
        if (frequency[1] < 1)
          continue;
        if (maxSquare >=   4 && frequency[4] < 1)
          continue;
        if (maxSquare >=  25 && frequency[2] < 1)
          continue;
        if (maxSquare >=  25 && frequency[5] < 1)
          continue;
        if (maxSquare >=  36 && frequency[3] < 1)
          continue;
        if (maxSquare >=  81 && frequency[8] < 1)
          continue;
        if (maxSquare >= 100 && frequency[0] < 2)
          continue;
        if (maxSquare >= 144 && frequency[4] < 2)
          continue;
        std::vector<unsigned int> matches;
        for (auto one : dice1)
        {
          if (one == 9)
            one = 6;
          for (auto two : dice2)
          {
            if (two == 9)
              two = 6;
            for (auto three : dice3)
            {
              if (three == 9)
                three = 6;
              unsigned int current[AllDices] = { one, two, three };
              if (current[0] > current[1])
                std::swap(current[0], current[1]);
              if (current[1] > current[2])
                std::swap(current[1], current[2]);
              if (current[0] > current[1])
                std::swap(current[0], current[1]);
              auto sortedSquare = 100 * current[0] + 10 * current[1] + current[2];
              auto match = std::find(squares.begin(), squares.end(), sortedSquare);
              if (match != squares.end())
                matches.push_back(sortedSquare);
            }
          }
        }
        if (matches.size() < squares.size())
          continue;
        std::sort(matches.begin(), matches.end());
        auto last = std::unique(matches.begin(), matches.end());
        open = squares;
        for (auto m = matches.begin(); m != last; m++)
        {
          auto match = std::find(open.begin(), open.end(), *m);
          open.erase(match);
        }
        if (open.empty())
          valid++;
      } while (std::next_permutation(permutationDice3.begin(), permutationDice3.end()));
    } while (std::next_permutation(permutationDice2.begin(), permutationDice2.end()));
  } while (std::next_permutation(permutationDice1.begin(), permutationDice1.end()));
  std::cout << valid;
  return 0;
}
