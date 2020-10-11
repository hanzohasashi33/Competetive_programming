#include <iostream>
#include <set>
unsigned int getSum(unsigned int x)
{
  unsigned int divisorSum = 1;
  for (unsigned int divisor = 2; divisor * divisor <= x; divisor++)
    if (x % divisor == 0)
    {
      divisorSum += divisor;
      auto otherDivisor = x / divisor;
      if (otherDivisor != divisor)
        divisorSum += otherDivisor;
    }
  return divisorSum;
}
int main()
{
  std::set<unsigned int> amicables;
  const unsigned int MaxAmicable = 100000;
  for (unsigned int i = 2; i <= MaxAmicable; i++)
  {
    auto sibling = getSum(i);
    if (i == getSum(sibling) && i != sibling)
    {
      amicables.insert(i);
      amicables.insert(sibling);
    }
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;
    unsigned int sum = 0;
    for (auto i : amicables)
    {
      if (i > x)
        break;
      sum += i;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
