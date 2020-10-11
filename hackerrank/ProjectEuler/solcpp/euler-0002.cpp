#include <iostream>
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    std::cin >> last;
    unsigned long long sum = 0;
    unsigned long long a = 1;
    unsigned long long b = 2;
    while (b <= last)
    {
      if (b % 2 == 0)
        sum += b;
      auto next = a + b;
      a = b;
      b = next;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
