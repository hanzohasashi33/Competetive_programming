#include <iostream>
bool isPrime(int x)
{
  if (x <= 1)
    return false;
  for (int factor = 2; factor*factor <= x; factor++)
    if (x % factor == 0)
      return false;
  return true;
}
int main()
{
  int limit;
  std::cin >> limit;
  if (limit < 0)
    limit = -limit;
  unsigned int consecutive = 0;
  int bestA = 0;
  int bestB = 0;
  for (int a = -limit; a <= +limit; a++)
    for (int b = -limit; b <= +limit; b++)
    {
      unsigned int length = 0;
      while (isPrime(length * length + a * length + b))
        length++;
      if (consecutive < length)
      {
        consecutive = length;
        bestA = a;
        bestB = b;
      }
    }
#define ORIGINAL
#ifdef ORIGINAL
  std::cout << (bestA * bestB) << std::endl;
#else
  std::cout << bestA << " " << bestB << std::endl;
#endif
  return 0;
}
