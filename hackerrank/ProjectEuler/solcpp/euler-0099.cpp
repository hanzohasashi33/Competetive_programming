#include <cmath>
#include <map>
#include <iostream>
#define ORIGINAL
int main()
{
#ifdef ORIGINAL
  std::map<double, unsigned int> data;
  for (unsigned int i = 1; i <= 1000; i++) 
  {
    unsigned int base, exponent;
    char comma; 
    std::cin >> base >> comma >> exponent;
    data[exponent * log(base)] = i;
  }
  std::cout << data.rbegin()->second << std::endl;
  return 0;
#else
  unsigned int numbers;
  std::cin >> numbers;
  std::map<double, std::pair<unsigned int, unsigned int>> data;
  for (unsigned int i = 1; i <= numbers; i++)
  {
    unsigned int base, exponent;
    std::cin >> base >> exponent;
    data[exponent * log(base)] = std::make_pair(base, exponent);
  }
  unsigned int pos;
  std::cin >> pos;
  auto i = data.begin();
  std::advance(i, pos - 1); 
  auto result   = i->second;
  auto base     = result.first;
  auto exponent = result.second;
  std::cout << base << " " << exponent << std::endl;
  return 0;
#endif
}
