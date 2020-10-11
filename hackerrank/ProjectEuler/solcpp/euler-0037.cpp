#include <set>
#include <iostream>
int main()
{
  unsigned int n;
  std::cin >> n; 
  std::set<unsigned int> primes;
  primes.insert(2);
  primes.insert(3);
  primes.insert(5);
  primes.insert(7);
  unsigned int sum = 0;
  for (unsigned int i = 11; i < n; i += 2)
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
    if (!isPrime)
      continue;
    primes.insert(i);
    auto right = i;
    while (right > 0 && primes.count(right) != 0)
      right /= 10;
    if (right != 0)
      continue;
    auto left = i;
    unsigned int factor = 1;
    while (factor * 10 <= left)
      factor *= 10;
    while (left > 0 && primes.count(left) != 0)
    {
      left %= factor;
      factor /= 10;
    }
    if (left != 0)
      continue;
    sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
