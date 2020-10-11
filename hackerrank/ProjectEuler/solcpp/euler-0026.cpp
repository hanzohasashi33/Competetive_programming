#include <iostream>
#include <vector>
unsigned int cycleLength(unsigned int x)
{
  if (x == 0)
    return 0;
  const unsigned int NotSeenYet = 0;
  std::vector<unsigned int> lastPos(x, NotSeenYet);
  unsigned int position = 1;
  unsigned int dividend = 1;
  while (true)
  {
    unsigned int remainder = dividend % x;
    if (remainder == 0)
      return 0;
    if (lastPos[remainder] != NotSeenYet)
      return position - lastPos[remainder];
    lastPos[remainder] = position;
    position++;
    dividend = remainder * 10;
  }
}
int main()
{
  const unsigned int MaxDenominator = 10000;
  std::vector<unsigned int> cache = { 0 }; 
  unsigned int longestDenominator = 0;
  unsigned int longestCycle       = 0;
  for (unsigned int denominator = 1; denominator <= MaxDenominator; denominator++)
  {
    auto length = cycleLength(denominator);
    if (longestCycle < length)
    {
      longestCycle       = length;
      longestDenominator = denominator;
    }
    cache.push_back(longestDenominator);
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;
    std::cout << cache[x - 1] << std::endl;
  }
  return 0;
}
