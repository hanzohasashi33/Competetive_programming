#include <vector>
#include <iostream>
#include <algorithm>
std::vector<unsigned int> sums;
unsigned long long mulmod(unsigned long long a, unsigned long long b, unsigned long long modulo)
{
#ifdef __GNUC__
  return ((unsigned __int128)a * b) % modulo;
#endif
  a %= modulo;
  b %= modulo;
  if (a <= 0xFFFFFFF && b <= 0xFFFFFFF)
    return (a * b) % modulo;
  if (b > a)
    std::swap(a, b);
  unsigned long long result = 0;
  while (a > 0 && b > 0)
  {
    if (b & 1)
    {
      result += a;
      if (result >= modulo)
        result -= modulo;
    }
    a <<= 1;
    if (a >= modulo)
      a -= modulo;
    b >>= 1;
  }
  return result;
}
unsigned long long powmod(unsigned long long base, unsigned long long exponent, unsigned long long modulo)
{
  unsigned long long result = 1;
  while (exponent > 0)
  {
    if (exponent & 1)
      result = mulmod(result, base, modulo);
    base = mulmod(base, base, modulo);
    exponent >>= 1;
  }
  return result;
}
bool isPrime(unsigned long long p)
{
  const unsigned int bitmaskPrimes2to31 = (1 << 2) | (1 << 3) | (1 << 5) | (1 << 7) |
                                          (1 << 11) | (1 << 13) | (1 << 17) | (1 << 19) |
                                          (1 << 23) | (1 << 29);
  if (p < 31)
    return (bitmaskPrimes2to31 & (1 << p)) != 0;
  if (p % 2 == 0 || p % 3 == 0 || p % 5 == 0 || p % 7 == 0 ||
      p % 11 == 0 || p % 13 == 0 || p % 17 == 0)
    return false;
  if (p < 17 * 19)
    return true;
  const unsigned int STOP = 0;
  const unsigned int TestAgainst1[] = {377687, STOP};
  const unsigned int TestAgainst2[] = {31, 73, STOP};
  const unsigned int TestAgainst3[] = {2, 7, 61, STOP};
  const unsigned int TestAgainst4[] = {2, 13, 23, 1662803, STOP};
  const unsigned int TestAgainst7[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022, STOP};
  const unsigned int *testAgainst = TestAgainst7;
  if (p < 5329)
    testAgainst = TestAgainst1;
  else if (p < 9080191)
    testAgainst = TestAgainst2;
  else if (p < 4759123141ULL)
    testAgainst = TestAgainst3;
  else if (p < 1122004669633ULL)
    testAgainst = TestAgainst4;
  auto d = p - 1;
  d >>= 1;
  unsigned int shift = 0;
  while ((d & 1) == 0)
  {
    shift++;
    d >>= 1;
  }
  do
  {
    auto x = powmod(*testAgainst++, d, p);
    if (x == 1 || x == p - 1)
      continue;
    bool maybePrime = false;
    for (unsigned int r = 0; r < shift; r++)
    {
      x = powmod(x, 2, p);
      if (x == 1)
        return false;
      if (x == p - 1)
      {
        maybePrime = true;
        break;
      }
    }
    if (!maybePrime)
      return false;
  } while (*testAgainst != STOP);
  return true;
}
unsigned long long merge(unsigned long long a, unsigned long long b)
{
  unsigned long long shift = 10;
  while (shift <= b)
    shift *= 10;
  return a * shift + b;
}
bool match(unsigned long long a, unsigned long long b)
{
  return isPrime(merge(a, b)) && isPrime(merge(b, a));
}
void checkTriple(unsigned int first, const std::vector<unsigned int> &candidates)
{
  for (size_t index2 = 0; index2 < candidates.size(); index2++)
    for (size_t index3 = index2 + 1; index3 < candidates.size(); index3++)
      if (match(candidates[index2], candidates[index3]))
      {
        auto sum = first + candidates[index2] + candidates[index3];
        sums.push_back(sum);
      }
}
void checkQuadruple(unsigned int first, const std::vector<unsigned int> &candidates)
{
  for (size_t index2 = 0; index2 < candidates.size(); index2++)
    for (size_t index3 = index2 + 1; index3 < candidates.size(); index3++)
    {
      if (!match(candidates[index2], candidates[index3]))
        continue;
      for (size_t index4 = index3 + 1; index4 < candidates.size(); index4++)
        if (match(candidates[index2], candidates[index4]) &&
            match(candidates[index3], candidates[index4]))
        {
          auto sum = first + candidates[index2] + candidates[index3] + candidates[index4];
          sums.push_back(sum);
        }
    }
}
void checkQuintuple(unsigned int first, const std::vector<unsigned int> &candidates)
{
  for (size_t index2 = 0; index2 < candidates.size(); index2++)
    for (size_t index3 = index2 + 1; index3 < candidates.size(); index3++)
    {
      if (!match(candidates[index2], candidates[index3]))
        continue;
      for (size_t index4 = index3 + 1; index4 < candidates.size(); index4++)
      {
        if (!match(candidates[index2], candidates[index4]) ||
            !match(candidates[index3], candidates[index4]))
          continue;
        for (size_t index5 = index4 + 1; index5 < candidates.size(); index5++)
          if (match(candidates[index2], candidates[index5]) &&
              match(candidates[index3], candidates[index5]) &&
              match(candidates[index4], candidates[index5]))
          {
            auto sum = first + candidates[index2] + candidates[index3] +
                       candidates[index4] + candidates[index5];
            sums.push_back(sum);
          }
      }
    }
}
int main()
{
  unsigned int maxPrime = 20000;
  unsigned int size = 5;
  std::cin >> maxPrime >> size;
  std::vector<unsigned int> primes;
  for (unsigned int i = 3; i < maxPrime; i += 2)
  {
    bool isPrime = true;
    for (auto p : primes)
    {
      if (p * p > i)
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
  for (size_t i = 0; i < primes.size(); i++)
  {
    auto smallPrime = primes[i];
    if (smallPrime == 5)
      continue;
    std::vector<unsigned int> candidates;
    for (size_t j = i + 1; j < primes.size(); j++)
    {
      auto largePrime = primes[j];
      if (match(smallPrime, largePrime))
        candidates.push_back(largePrime);
    }
    if (size == 3)
      checkTriple(smallPrime, candidates);
    else if (size == 4)
      checkQuadruple(smallPrime, candidates);
    else
      checkQuintuple(smallPrime, candidates);
  }
  std::sort(sums.begin(), sums.end());
  for (auto s : sums)
    std::cout << s << std::endl;
}
