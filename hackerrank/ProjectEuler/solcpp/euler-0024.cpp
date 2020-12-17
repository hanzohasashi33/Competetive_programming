#include <iostream>
#include <string>
#include <algorithm>
int main()
{
#ifdef ORIGINAL
  unsigned int numPermutation = 1000000;
  std::string current = "0123456789";
  while (--numPermutation)
    std::next_permutation(current.begin(), current.end());
  std::cout << current << std::endl;
#else
  const std::string abc = "abcdefghijklm";
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    const unsigned long long factorials[13+1] =
    { 1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800 };
    unsigned long long x;
    std::cin >> x;
    x %= factorials[abc.size()];
    x--;
    auto remain = abc;
    std::string result;
    while (!remain.empty())
    {
      auto currentFactorial = factorials[remain.size() - 1];
      auto pos = x / currentFactorial;
      result += remain[pos];
      remain.erase(pos, 1);
      x %= currentFactorial;
    }
    std::cout << result << std::endl;
  }
#endif
  return 0;
}
