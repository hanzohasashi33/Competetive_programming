#include <iostream>
#include <vector>
#include <cmath>
int main()
{
  const int MaxPerimeter = 3000;
  const int NoSolution   =   -1;
  std::vector<int> cache(MaxPerimeter + 1, NoSolution);
  for (int a = 1; a < MaxPerimeter; a++)
    for (int b = a + 1; b < MaxPerimeter - a; b++)
    {
      int c2 = a*a + b*b;
      int c = sqrt(c2);
      if (c*c != c2)
        continue;
      int sum = a + b + c;
      if (sum > MaxPerimeter)
        break;
      if (cache[sum] < a*b*c)
        cache[sum] = a*b*c;
    }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int n;
    std::cin >> n;
    std::cout << cache[n] << std::endl;
  }
  return 0;
}
