#include <string>
#include <iostream>
unsigned int getDigit(unsigned long long pos)
{
  unsigned int       digits = 1;
  unsigned long long range  = 9;
  unsigned long long first  = 1;
  unsigned long long skip = 0;
  while (skip + digits*range < pos)
  {
    skip += digits*range;
    digits++;
    range *= 10;
    first *= 10;
  }
  while (range > 9)
  {
    while (skip + digits*range < pos)
    {
      skip  += digits*range;
      first += range;
    }
    range /= 10;
  }
  while (skip + digits < pos)
  {
    first++;
    skip += digits;
  }
  pos -= skip;
  pos--;
  auto s = std::to_string(first);
  return s[pos] - '0';
}
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int product = 1;
    for (unsigned int i = 0; i < 7; i++)
    {
      unsigned long long pos;
      std::cin >> pos;
      product *= getDigit(pos);
    }
    std::cout << product << std::endl;
  }
  return 0;
}
