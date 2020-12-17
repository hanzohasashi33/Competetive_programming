#include <iostream>
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
  while (a != 0)
  {
    unsigned long long c = a;
    a = b % a;
    b = c;
  }
  return b;
}
unsigned long long lcm(unsigned long long a, unsigned long long b)
{
  return a * (b / gcd(a, b));
}
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int x;
    std::cin >> x;
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= x; i++)
      result = lcm(result, i);
    std::cout << result << std::endl;
  }
  return 0;
}
