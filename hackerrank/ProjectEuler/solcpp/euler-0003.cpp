#include <iostream>
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long x;
    std::cin >> x;
    for (unsigned long long factor = 2; factor * factor <= x; factor++)
      while (x % factor == 0 && x != factor) 
        x /= factor;
    std::cout << x << std::endl;
  }
  return 0;
}
