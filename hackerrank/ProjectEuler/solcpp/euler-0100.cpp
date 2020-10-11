#include <iostream>
#include <cmath>
int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long minimum = 1000000000000ULL;
    unsigned long long p = 1;
    unsigned long long q = 2;
    std::cin >> p >> q >> minimum;
    unsigned long long blue = 0;
    unsigned long long red  = 0;
    if (p == 1 && q == 2)
    {
      blue = 15;
      red  =  6;
      while (blue + red < minimum)
      {
        red   = 2 * blue + red - 1; 
        blue += 2 * red;            
      }
#ifdef ORIGINAL
      std::cout << blue << std::endl;
#else
      std::cout << blue << " " << (red + blue) << std::endl;
#endif
      continue;
    }
    bool found = false;
    for (blue = 2; blue < 100000; blue++)
    {
      unsigned long long b2 = blue * (blue - 1);
      b2 *= q;
      if (b2 % p != 0)
        continue;
      unsigned long long sum2 = b2 / p; 
      unsigned long long sum  = std::sqrt(sum2) + 1;
      if (sum * (sum - 1) != sum2)
        continue;
      red = sum - blue;
      if (blue + red >= minimum)
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      std::cout << "No solution" << std::endl;
      continue;
    }
    std::cout << blue << " " << (red + blue) << std::endl;
  }
  return 0;
}
