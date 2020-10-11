#include <iostream>
#include <vector>
const unsigned int NumCoins = 8;
const unsigned int Coins[NumCoins] = { 1,2,5,10,20,50,100,200 };
typedef std::vector<unsigned long long> Combinations;
int main()
{
  std::vector<Combinations> history;
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int total;
    std::cin >> total;
    for (unsigned int cents = history.size(); cents <= total; cents++)
    {
      Combinations ways(NumCoins);
      ways[0] = 1;
      for (size_t i = 1; i < ways.size(); i++)
      {
        ways[i] = ways[i - 1];
        auto currentCoin = Coins[i];
        if (cents >= currentCoin)
        {
          auto remaining = cents - currentCoin;
          ways[i] += history[remaining][i];
        }
        ways[i] %= 1000000007;
      }
      history.push_back(ways);
    }
    auto result = history[total];
    auto combinations = result.back();
    combinations %= 1000000007; 
    std::cout << combinations << std::endl;
  }
  return 0;
}
