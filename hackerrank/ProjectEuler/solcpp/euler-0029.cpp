#include <iostream>
#include <vector>
int main()
{
  unsigned int maxExponent;
  std::cin >> maxExponent;
  const unsigned int MaxBasePower = 16;
  std::vector<unsigned int> minExponent((maxExponent+1)*MaxBasePower);
  for (unsigned int i = 1; i <= MaxBasePower; i++)
    for (unsigned int j = 1; j <= maxExponent; j++)
      if (minExponent[i*j] == 0)
        minExponent[i*j] = i;
  std::vector<unsigned int> base(maxExponent + 1, 0);
  unsigned int repeated = 0;
  for (unsigned int x = 2; x <= maxExponent; x++) 
  {
    auto parent = base[x];
    if (parent == 0) 
    {
      auto power = x * x;
      while (power <= maxExponent)
      {
        base[power] = x;
        power *= x;
      }
      continue;
    }
    unsigned int exponent = 0;
    auto reduce = x;
    while (reduce > 1)
    {
      reduce /= parent;
      exponent++;
    }
    for (unsigned int y = 2; y <= maxExponent; y++)
    {
      if (minExponent[y * exponent] < exponent)
        repeated++;
    }
  }
  unsigned long long all = maxExponent - 1;
  auto result = all*all - repeated;
  std::cout << result << std::endl;
  return 0;
}
