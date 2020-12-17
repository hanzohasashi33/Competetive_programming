#include <string>
#include <iostream>
#include <cmath>
const int NoTriangle = 0;
int getTriangle(unsigned long long x)
{
  unsigned long long n = sqrt(2*x);
  unsigned long long check = n * (n + 1) / 2;
  if (x == check)
    return n;
  else
    return NoTriangle;
}
std::string readWord()
{
  std::string result;
  while (true)
  {
    char c = std::cin.get();
    if (!std::cin)
      break;
    if (c == '"')
      continue;
    if (c == ',')
      break;
    result += c;
  }
  return result;
}
int main()
{
#ifdef ORIGINAL
  unsigned int triangleWords = 0;
  while (true)
  {
    auto word = readWord();
    if (word.empty())
      break;
    unsigned int sum = 0;
    for (auto c : word)
      sum += c - 'A' + 1; 
    if (getTriangle(sum) != NoTriangle)
      triangleWords++;
  }
  std::cout << triangleWords << std::endl;
#else
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long x;
    std::cin >> x;
    std::cout << getTriangle(x) << std::endl;
  }
#endif
  return 0;
}
