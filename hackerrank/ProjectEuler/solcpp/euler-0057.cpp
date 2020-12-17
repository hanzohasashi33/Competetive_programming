#include <vector>
#include <iostream>
struct BigNum : public std::vector<unsigned int>
{
  static const unsigned int MaxDigit = 10;
  BigNum(unsigned long long x = 0)
  {
    do
    {
      push_back(x % MaxDigit);
      x /= MaxDigit;
    } while (x > 0);
  }
  BigNum operator+(const BigNum& other) const
  {
    auto result = *this;
    if (result.size() < other.size())
      result.resize(other.size(), 0);
    unsigned int carry = 0;
    for (size_t i = 0; i < result.size(); i++)
    {
      carry += result[i];
      if (i < other.size())
        carry += other[i];
      else
        if (carry == 0)
          return result;
      if (carry < MaxDigit)
      {
        result[i] = carry;
        carry     = 0;
      }
      else
      {
        result[i] = carry - MaxDigit;
        carry = 1;
      }
    }
    if (carry > 0)
      result.push_back(carry);
    return result;
  }
};
#define ORIGINAL
int main()
{
  unsigned int iterations = 1000;
  std::cin >> iterations;
  BigNum a = 1;
  BigNum b = 1;
  unsigned int count = 0;
  for (unsigned int i = 0; i <= iterations; i++)
  {
    if (a.size() > b.size())
    {
#ifdef ORIGINAL
      count++;
#else
      std::cout << i << std::endl;
#endif
    }
    auto twoB  = b + b;
    auto nextA = a + twoB;
    auto nextB = b + a;
    a = std::move(nextA);
    b = std::move(nextB);
  }
#ifdef ORIGINAL
  std::cout << count << std::endl;
#endif
  return 0;
}
