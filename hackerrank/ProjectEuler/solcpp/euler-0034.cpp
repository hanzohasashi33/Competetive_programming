#include <iostream>
int main()
{
  const unsigned int factorials[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
  unsigned int limit;
  std::cin >> limit;
  unsigned int result = 0;
  for (unsigned int i = 10; i < limit; i++)
  {
    unsigned int sum = 0;
    unsigned int x = i;
    while (x > 0)
    {
      sum += factorials[x % 10];
      x /= 10;
    }
#define ORIGINAL
#ifdef ORIGINAL
    if (sum == i)
      result += i;
#else
    if (sum % i == 0)
      result += i;
#endif
  }
  std::cout << result << std::endl;
  return 0;
}
