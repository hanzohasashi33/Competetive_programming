#include <iostream>
#include <set>
const unsigned int EverythingsASumFromHere = 28124;
std::set<unsigned int> abundant;
unsigned int getSum(unsigned int x)
{
  unsigned int divisorSum = 1;
  for (unsigned int divisor = 2; divisor * divisor <= x; divisor++)
    if (x % divisor == 0)
    {
      divisorSum += divisor;
      unsigned int otherDivisor = x / divisor;
      if (otherDivisor != divisor)
        divisorSum += otherDivisor;
    }
  return divisorSum;
}
bool isAbundantSum(unsigned int x)
{
  if (x >= EverythingsASumFromHere)
    return true;
  for (auto i : abundant)
  {
    if (i >= x) 
      return false;
    unsigned int other = x - i;
    if (abundant.count(other) == 0)
      continue;
    return true;
  }
  return false;
}
int main()
{
  for (unsigned int i = 1; i < EverythingsASumFromHere; i++) 
    if (getSum(i) > i)
      abundant.insert(i);
#ifdef ORIGINAL
  unsigned long long sum = 0;
  for (unsigned int i = 0; i < EverythingsASumFromHere; i++)
  {
    if (!isAbundantSum(i))
      sum += i;
  }
  std::cout << sum << std::endl;
#else
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;
    std::cout << (isAbundantSum(x) ? "YES" : "NO") << std::endl;
  }
#endif
  return 0;
}
