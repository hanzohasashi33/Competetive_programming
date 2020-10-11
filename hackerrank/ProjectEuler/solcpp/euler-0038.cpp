#include <iostream>
int main()
{
  unsigned int maxFactor, maxDigit;  
  std::cin >> maxFactor >> maxDigit;
  unsigned int bitsAll = 0;
  for (unsigned int i = 1; i <= maxDigit; i++)
    bitsAll |= 1 << i;
#define ORIGINAL
#ifdef ORIGINAL
  unsigned int largest = 0;
#endif
  for (unsigned int i = 2; i <= maxFactor; i++)
  {
    unsigned int pandigital = 0;
    unsigned int multiplier = 1;
    unsigned int bitsUsed   = 0;
    while (bitsUsed < bitsAll)
    {
      unsigned int product = i * multiplier;
      while (product > 0)
      {
        unsigned int digit = product % 10;
        product    /= 10;
        pandigital *= 10;
        unsigned int bitMask = 1 << digit;
        if (digit == 0 || (bitsUsed & bitMask) != 0)
        {
          bitsUsed = bitsAll + 1; 
          break;
        }
        bitsUsed |= bitMask;
      }
      pandigital += i * multiplier;
      multiplier++;
    }
    if (bitsUsed == bitsAll)
    {
#ifdef ORIGINAL
      if (largest < pandigital)
        largest = pandigital;
#else
      std::cout << i << std::endl;
#endif
    }
  }
#ifdef ORIGINAL
  std::cout << largest << std::endl;
#endif
  return 0;
}
