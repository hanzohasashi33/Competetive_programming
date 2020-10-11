#include <iostream>
#include <set>
#include <vector>
unsigned int gcd(unsigned int a, unsigned int b)
{
  while (a != 0)
  {
    unsigned int c = a;
    a = b % a;
    b = c;
  }
  return b;
}
int main()
{
  const unsigned int MaxPerimeter = 5000000;
  std::vector<unsigned int> count(MaxPerimeter + 1, 0);
  for (unsigned long long m = 1; 2*m*m < MaxPerimeter; m++)
    for (unsigned long long n = 1; n < m; n++)
    {
      if (m % 2 == 1 && n % 2 == 1)
        continue;
      if (gcd(m, n) > 1)
        continue;
      unsigned int k = 1;
      while (true)
      {
        auto a = k * (m*m - n*n);
        auto b = k *    2*m*n;
        auto c = k * (m*m + n*n);
        k++;
        auto perimeter = a + b + c;
        if (perimeter > MaxPerimeter)
          break;
        count[perimeter]++;
      }
    }
  unsigned long long bestCount = 0;
  std::set<unsigned int> best;
  best.insert(0); 
  for (unsigned int i = 0; i < count.size(); i++)
    if (bestCount < count[i])
    {
      bestCount = count[i];
      best.insert(i);
    }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int maxPerimeter;
    std::cin >> maxPerimeter;
    auto i = best.upper_bound(maxPerimeter);
    i--;
    std::cout << *i << std::endl;
  }
  return 0;
}
