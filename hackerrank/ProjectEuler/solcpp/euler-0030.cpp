#include <iostream>
int main()
{
  unsigned int exponent;
  std::cin >> exponent;
  unsigned int sum = 0;
  for (unsigned int i = 2; i <= 7*9*9*9*9*9*9; i++)
  {
    unsigned int thisSum = 0;
    unsigned int reduce = i;
    while (reduce > 0)
    {
      unsigned int digit = reduce % 10;
      reduce /= 10;
      unsigned int power = 1;
      for (unsigned int j = 1; j <= exponent; j++)
        power *= digit;
      thisSum += power;
    }
    if (thisSum == i)
      sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
