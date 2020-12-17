#include <iostream>
#include <string>
#include <algorithm>
std::string num2str(unsigned int x, unsigned int base)
{
  std::string result;
  while (x > 0)
  {
    auto digit = x % base;
    x         /= base;
    result.insert(0, 1, char(digit + '0'));
  }
  return result;
}
bool isPalindrome(const std::string& s)
{
  auto other = s;
  std::reverse(other.begin(), other.end());
  return other == s;
}
int main()
{
  unsigned int limit, base; 
  std::cin >> limit >> base;
  unsigned int sum = 0;
  for (unsigned int x = 1; x < limit; x++)
    if (isPalindrome(num2str(x, 10)) &&  
        isPalindrome(num2str(x, base)))  
      sum += x;
  std::cout << sum << std::endl;
  return 0;
}
