#include <iostream>
#include <vector>
#include <map>
int main()
{
  const unsigned int MaxPrime = 2000000;
  std::vector<unsigned int> primes;
  primes.push_back(2);
  for (unsigned int i = 3; i <= MaxPrime; i += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
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
      primes.push_back(i);
  }
  std::map<unsigned int, unsigned long long> sums;
  unsigned long long sum = 0;
  for (auto p : primes)
  {
    sum += p;
    sums[p] = sum;
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;
    auto i = sums.upper_bound(x);
    i--;
    std::cout << i->second << std::endl;
  }
  return 0;
}
