#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
int main()
{
  unsigned int maxDigit;
  std::cin >> maxDigit;
  std::vector<unsigned int> digits = { 1,2,3,4,5,6,7,8,9 };
  digits.resize(maxDigit);
  std::set<unsigned int> valid;
  do
  {
    for (unsigned int lenA = 1; lenA < maxDigit; lenA++)
      for (unsigned int lenB = 1; lenB < maxDigit - lenA; lenB++)
      {
        unsigned int lenC = maxDigit - lenA - lenB;
        if (lenC < lenA || lenC < lenB)
          break;
        unsigned int pos = 0;
        unsigned int a = 0;
        for (unsigned int i = 1; i <= lenA; i++)
        {
          a *= 10;
          a += digits[pos++];
        }
        unsigned int b = 0;
        for (unsigned int i = 1; i <= lenB; i++)
        {
          b *= 10;
          b += digits[pos++];
        }
        unsigned int c = 0;
        for (unsigned int i = 1; i <= lenC; i++)
        {
          c *= 10;
          c += digits[pos++];
        }
        if (a*b == c)
          valid.insert(c);
      }
  } while (std::next_permutation(digits.begin(), digits.end()));
  unsigned int sum = 0;
  for (auto x : valid)
    sum += x;
  std::cout << sum << std::endl;
  return 0;
}
