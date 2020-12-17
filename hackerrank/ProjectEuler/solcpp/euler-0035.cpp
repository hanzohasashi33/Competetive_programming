#include <iostream>
#include <set>
int main()
{
  unsigned int n;
  std::cin >> n;
  std::set<unsigned int> primes;
  primes.insert(2);
  for (unsigned int i = 3; i <= n; i += 2)
  {
    bool isPrime = true;
    for (auto x : primes)
    {
      if (i % x == 0)
      {
        isPrime = false;
        break;
      }
      if (x*x > i)
        break;
    }
    if (isPrime)
      primes.insert(i);
  }
  unsigned int sum = 0;
  for (auto x : primes)
  {
    unsigned int shift = 1;
    while (x > shift * 10)
      shift *= 10;
    auto rotated = x;
    do
    {
      auto digit = rotated % 10;
      rotated /= 10;
      rotated += digit * shift;
      if (primes.count(rotated) == 0)
        break;
    } while (rotated != x); 
#define ORIGINAL
#ifdef ORIGINAL
    if (rotated == x)
      sum++;
#else
    if (rotated == x)
      sum += x;
#endif
  }
  std::cout << sum << std::endl;
  return 0;
}
