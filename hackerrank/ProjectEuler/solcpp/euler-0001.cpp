#include <iostream>
unsigned long long sum(unsigned long long x)
{
  return x * (x + 1) / 2;
}
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    std::cin >> last;
    last--;
    auto sumThree   =  3 * sum(last /  3);
    auto sumFive    =  5 * sum(last /  5);
    auto sumFifteen = 15 * sum(last / 15);
    std::cout << (sumThree + sumFive - sumFifteen) << std::endl;
  }
  return 0;
}
