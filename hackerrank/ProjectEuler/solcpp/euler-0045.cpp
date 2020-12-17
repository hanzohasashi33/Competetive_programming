#include <iostream>
#include <cmath>
bool isTriangular(unsigned long long x)
{
  unsigned long long n = sqrt(2*x);
  unsigned long long check = n * (n + 1) / 2;
  return (x == check);
}
bool isPentagonal(unsigned long long x)
{
  unsigned long long n = (1 + sqrt(24*x + 1)) / 6;
  auto p_n = n * (3 * n - 1) / 2;
  return p_n == x;
}
int main()
{
#ifdef ORIGINAL
  for (unsigned int i = 144; ; i++)
  {
    unsigned int hexagonal = i * (2*i - 1);
    if (isPentagonal(hexagonal))
    {
      std::cout << hexagonal << std::endl;
      return 0;
    }
  }
#else
  unsigned long long limit;
  unsigned int a, b;
  std::cin >> limit >> a >> b;
  if (a == 3 && b == 5)
  {
    for (unsigned long long i = 1; ; i++)
    {
      auto pentagonal = i * (3*i - 1) / 2;
      if (pentagonal >= limit)
        break;
      if (isTriangular(pentagonal))
        std::cout << pentagonal << std::endl;
    }
  }
  if (a == 5 && b == 6)
  {
    for (unsigned long long i = 1; ; i++)
    {
      auto hexagonal = i * (2*i - 1);
      if (hexagonal >= limit)
        break;
      if (isPentagonal(hexagonal))
        std::cout << hexagonal << std::endl;
    }
  }
#endif
  return 0;
}
