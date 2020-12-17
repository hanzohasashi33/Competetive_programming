#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
unsigned long long fingerprintFactorial(unsigned int x)
{
  unsigned long long result = 0;
  while (x > 0)
  {
    unsigned int digit = x % 10;
    x /= 10;
    if (digit == 1)
      digit = 0;
    unsigned long long shift = 1;
    for (unsigned int i = 0; i < digit; i++)
      shift *= 10;
    result += shift;
  }
  return result;
}
int main()
{
  std::map<unsigned long long, unsigned int> cache;
  cache[fingerprintFactorial(145)] = 1 + 1;
  cache[fingerprintFactorial(169)] = 3 + 1;
  unsigned int tests = 1;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int limit = 1000000;
    unsigned int loopLength = 60;
    std::cin >> limit >> loopLength;
    unsigned int result = 0;
    for (unsigned int i = 0; i <= limit; i++)
    {
      unsigned long long id = fingerprintFactorial(i);
      if (cache.count(id) == 0)
      {
        std::vector<unsigned int> loop;
        unsigned int x = i;
        while (std::find(loop.begin(), loop.end(), x) == loop.end() && loop.size() <= loopLength)
        {
          loop.push_back(x);
          unsigned int facSum = 0;
          do
          {
            const unsigned int fac[10] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
            facSum += fac[x % 10];
            x /= 10;
          } while (x > 0);
          x = facSum;
        }
        cache[id] = loop.size();
      }
      bool match = (cache[id] == loopLength);
      if (i == 145)
        match = (loopLength == 1);
      if (i == 169 || i == 1454 || i == 363601)
        match = (loopLength == 3);
      if (i == 871 || i == 872 || i == 45361 || i == 45362)
        match = (loopLength == 2);
      if (match)
        result++;
#ifndef ORIGINAL
      if (match)
        std::cout << i << " ";
#endif
    }
#ifdef ORIGINAL
    std::cout << result << std::endl;
#else
    if (result == 0)
      std::cout << "-1";
    std::cout << std::endl;
#endif
  }
}
