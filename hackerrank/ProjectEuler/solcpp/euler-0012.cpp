#include <iostream>
#include <vector>
int main()
{
  const unsigned int MaxDivisors = 1000;
  std::vector<unsigned int> smallest;
  smallest.push_back(0); 
  unsigned int index    = 0;
  unsigned int triangle = 0; 
  while (smallest.size() < MaxDivisors)
  {
    index++;
    triangle += index;
    if (smallest.size() > 300 && triangle % 10 != 0)
      continue;
    unsigned int divisors = 0;
    unsigned int i        = 1;
    while (i*i < triangle)
    {
      if (triangle % i == 0)
        divisors += 2;
      i++;
    }
    if (i*i == triangle)
      divisors++;
    while (smallest.size() <= divisors)
      smallest.push_back(triangle);
  }
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned int minDivisors;
    std::cin >> minDivisors;
    std::cout << smallest[minDivisors + 1] << std::endl;
  }
  return 0;
}
