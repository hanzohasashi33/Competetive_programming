#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
std::string num2str(unsigned int x, unsigned int digits)
{
  std::string result;
  while (digits-- > 0)
  {
    auto digit = x % 10;
    result += char(digit + '0');
    x /= 10;
  }
  std::reverse(result.begin(), result.end());
  return result;
}
unsigned int str2num(const std::string& str)
{
  unsigned int result = 0;
  for (auto s : str)
  {
    result *= 10;
    result += s - '0';
  }
  return result;
}
unsigned int merge(const std::string& strFill, const std::string& mask)
{
  auto iteFill = strFill.begin();
  unsigned int result = 0;
  for (auto m : mask)
  {
    result *= 10;
    if (m == '.')
      result += *iteFill++ - '0';
    else 
      result += m - '0';
  }
  return result;
}
int main()
{
#ifdef ORIGINAL
  unsigned int multD = 1;
  unsigned int multN = 1;
  for (unsigned int d = 10; d <= 99; d++) 
    for (unsigned int n = 10; n < d; n++) 
      for (unsigned int cancel = 1; cancel <= 9; cancel++)
      {
        auto lowN  = n % 10;
        auto lowD  = d % 10;
        auto highN = n / 10;
        auto highD = d / 10;
        if (highD == cancel && lowN == cancel && lowD * n == highN * d)
        {
          multN *= n;
          multD *= d;
        }
      }
  for (unsigned int i = 2; i <= multN; i++)
    while (multN % i == 0 && multD % i == 0)
    {
      multN /= i;
      multD /= i;
    }
  std::cout << multD << std::endl;
  return 0;
#endif
  unsigned int digits;
  unsigned int cancel;
  std::cin >> digits >> cancel;
  auto keep = digits - cancel;
  const unsigned int Tens[] = { 1, 10, 100, 1000, 10000 };
  unsigned int sumN  = 0;
  unsigned int sumD  = 0;
  std::unordered_set<unsigned int> used;
  for (unsigned int d = 1; d < Tens[keep]; d++)
    for (unsigned int n = 1; n < d; n++)
    {
      auto strN = num2str(n, keep);
      auto strD = num2str(d, keep);
      for (auto insert = Tens[cancel - 1]; insert < Tens[cancel]; insert++)
      {
        auto strInsert = num2str(insert, cancel);
        bool isAscending = true;
        for (size_t i = 1; i < strInsert.size(); i++)
          if (strInsert[i - 1] > strInsert[i])
          {
            isAscending = false;
            break;
          }
        if (!isAscending)
          continue;
        strInsert.insert(0, keep, '.');
        auto strInsertN = strInsert;
        do
        {
          auto newN = merge(strN, strInsertN);
          if (newN < Tens[digits - 1])
          continue;
          auto strInsertD = strInsert;
          do
          {
            auto newD = merge(strD, strInsertD);
            if (newN * d == newD * n)
            {
              auto id = newN * 10000 + newD;
              if (used.count(id) == 0)
              {
                sumN  += newN;
                sumD  += newD;
                used.insert(id);
              }
            }
          }
          while (std::next_permutation(strInsertD.begin(), strInsertD.end()));
        }
        while (std::next_permutation(strInsertN.begin(), strInsertN.end()));
      }
    }
  std::cout << sumN << " " << sumD << std::endl;
  return 0;
}
