#include <iostream>
unsigned int powmod(unsigned long long base, unsigned int exponent, unsigned int modulo)
{
  unsigned long long result = 1;
  while (exponent > 0)
  {
    if (exponent % 2 == 1)
    {
      result = (result * base) % modulo;
      exponent--;
    }
    else
    {
      base = (base * base) % modulo;
      exponent /= 2;
    }
  }
  return result;
}
unsigned int inverseModulo(unsigned int a, unsigned int modulo)
{
  return powmod(a, modulo - 2, modulo);
}
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long n;
    std::cin >> n;
    unsigned long long sum = 1;
    unsigned long long x = n / 2;
    const unsigned int Modulo = 1000000007;
    x %= Modulo;
    unsigned long long sharedTerm = (2*x * (x + 1)) % Modulo;
    unsigned long long sum1 = ((4 * sharedTerm * (2*x + 1)) % Modulo) * inverseModulo(3, Modulo);
    unsigned long long sum2 = sharedTerm + 4*x + 1;
    sum = (sum1 % Modulo + sum2 % Modulo) % Modulo;
    std::cout << sum << std::endl;
  }
  return 0;
}
