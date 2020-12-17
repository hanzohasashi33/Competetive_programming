#include <set>
#include <iostream>
#include <algorithm>
int main()
{
  std::set<unsigned int> smallPrimes;
  smallPrimes.insert(2);
  for (unsigned int i = 3; i*i <= 987654321; i += 2)
  {
    bool isPrime = true;
    for (auto p : smallPrimes)
    {
      if (p*p > i)
        break;
      if (i % p == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      smallPrimes.insert(i);
  }
  std::set<unsigned int> panPrimes;
  for (unsigned int digits = 2; digits <= 9; digits++)
  {
    std::string strNumber = "123456789";
    strNumber.erase(digits);
    do
    {
      unsigned int number = std::stoi(strNumber);
      bool isPrime = true;
      for (auto p : smallPrimes)
      {
        if (p*p > number)
          break;
        if (number % p == 0)
        {
          isPrime = false;
          break;
        }
      }
      if (isPrime)
        panPrimes.insert(number);
    } while (std::next_permutation(strNumber.begin(), strNumber.end()));
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int limit;
    std::cin >> limit;
    auto i = panPrimes.upper_bound(limit);
    if (i == panPrimes.begin())
    {
      std::cout << "-1" << std::endl;
      continue;
    }
    i--;
    std::cout << *i << std::endl;
  }
  return 0;
}
