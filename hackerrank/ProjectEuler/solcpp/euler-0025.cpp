#include <vector>
#include <iostream>
typedef std::vector<unsigned int> Digits;
const unsigned int MaxDigits = 5000;
Digits add(const Digits& a, const Digits& b)
{
  Digits result = b;
  unsigned int carry = 0;
  for (unsigned int i = 0; i < result.size(); i++)
  {
    if (i < a.size())
      result[i] += a[i];
    result[i] += carry;
    if (result[i] >= 10)
    {
      carry = 1;
      result[i] -= 10;
    }
    else
      carry = 0;
  }
  if (carry != 0)
    result.push_back(carry);
  return result;
}
int main()
{
  std::vector<unsigned int> cache = { 0, 1 }; 
  cache.reserve(MaxDigits);
  Digits a = { 1 };
  Digits b = { 1 };
  unsigned int fiboIndex = 2;
  while (cache.size() <= MaxDigits)
  {
    fiboIndex++;
    auto next = add(a, b);
    a = std::move(b);
    b = std::move(next);
    auto numDigits = b.size();
    auto largestKnown = cache.size() - 1; 
    if (largestKnown < numDigits)
      cache.push_back(fiboIndex);
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int numDigits;
    std::cin >> numDigits;
    std::cout << cache[numDigits] << std::endl;
  }
  return 0;
}
