#include <iostream>
#include <string>
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int length;
    unsigned int span;
    std::string number;
    std::cin >> length >> span >> number;
    unsigned long long best = 0;
    for (int start = 0; start + span < length; start++)
    {
      unsigned long long current = 1;
      for (unsigned int i = 0; i < span; i++)
        current *= number[start + i] - '0';
      if (best < current)
        best = current;
    }
    std::cout << best << std::endl;
  }
  return 0;
}
