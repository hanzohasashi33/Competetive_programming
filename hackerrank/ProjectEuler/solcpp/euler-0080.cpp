#include <iostream>
#include <vector>
struct BigNum : public std::vector<unsigned int>
{
  static const unsigned int MaxDigit = 1000000000;
  BigNum(unsigned long long x = 0)
  {
    do
    {
      push_back(x % MaxDigit);
      x /= MaxDigit;
    } while (x > 0);
  }
  void operator+=(unsigned int other)
  {
    unsigned int carry = other;
    for (size_t i = 0; i < size(); i++)
    {
      carry += operator[](i);
      if (carry == 0)
        return;
      if (carry < MaxDigit)
      {
        operator[](i) = carry;
        carry         = 0;
      }
      else
      {
        operator[](i) = carry % MaxDigit;
        carry         = carry / MaxDigit;
      }
    }
    while (carry > 0)
    {
      push_back(carry % MaxDigit);
      carry /= MaxDigit;
    }
  }
  void operator+=(const BigNum& other)
  {
    if (size() < other.size())
      resize(other.size(), 0);
    unsigned int carry = 0;
    for (size_t i = 0; i < size(); i++)
    {
      carry += operator[](i);
      if (i < other.size())
        carry += other[i];
      else
        if (carry == 0)
          return;
      if (carry < MaxDigit)
      {
        operator[](i) = carry;
        carry     = 0;
      }
      else
      {
        operator[](i) = carry - MaxDigit;
        carry = 1;
      }
    }
    if (carry > 0)
      push_back(carry);
  }
  void operator-=(const BigNum& other)
  {
    int borrow = 0;
    for (size_t i = 0; i < size(); i++)
    {
      int diff = (int)operator[](i) - borrow;
      if (i < other.size())
        diff -= other[i];
      else
        if (borrow == 0)
          break;
      if (diff < 0)
      {
        borrow = 1;
        diff += MaxDigit;
      }
      else
        borrow = 0;
      operator[](i) = diff;
    }
    while (size() > 1 && back() == 0)
      pop_back();
  }
  void operator*=(unsigned int factor)
  {
    if (factor == 0)
    {
      clear();
      push_back(0);
      return;
    }
    if (factor == 1)
      return;
    if (factor == MaxDigit)
    {
      if (size() > 1 || operator[](0) > 0)
        insert(begin(), 0);
      return;
    }
    unsigned long long carry = 0;
    for (auto& i : *this)
    {
      carry += i * (unsigned long long)factor;
      i      = carry % MaxDigit;
      carry /= MaxDigit;
    }
    while (carry > 0)
    {
      push_back(carry % MaxDigit);
      carry /= MaxDigit;
    }
  }
  BigNum operator*(const BigNum& other) const
  {
    if (size() < other.size())
      return other * *this;
    BigNum result = 0;
    result.reserve(size() + other.size());
    for (int i = (int)other.size() - 1; i >= 0; i--)
    {
      BigNum temp = *this;
      temp   *= other[i];
      result *= MaxDigit;
      result += temp;
    }
    return result;
  }
  bool operator<(const BigNum& other) const
  {
    if (size() < other.size())
      return true;
    if (size() > other.size())
      return false;
    for (int i = (int)size() - 1; i >= 0; i--)
    {
      if (operator[](i) < other[i])
        return true;
      if (operator[](i) > other[i])
        return false;
    }
    return false;
  }
  std::string toString() const
  {
    std::string result;
    for (auto x : *this)
    {
      for (unsigned int shift = 1; shift < MaxDigit; shift *= 10)
      {
        auto digit = (x / shift) % 10;
        result.insert(0, 1, (char)digit + '0');
      }
    }
    while (result.size() > 1 && result.front() == '0')
      result.erase(0, 1);
    return result;
  }
};
BigNum jarvis(unsigned int x, const BigNum& precision)
{
  static const BigNum Fortyfive = 45;
  BigNum a = x * 5;
  BigNum b = 5;
  a.reserve(precision.size());
  b.reserve(precision.size());
  while (b < precision)
  {
    if (!(a < b)) 
    {
      a -=   b;
      b +=  10;
    }
    else
    {
      a *= 100;
      b *=  10;
      b -= Fortyfive;
    }
  }
  return b;
}
unsigned int countDigits(const BigNum& x, unsigned int numDigits)
{
  unsigned int sum = 0;
  for (auto i : x.toString().substr(0, numDigits))
    sum += i - '0';
  return sum;
}
int main()
{
  unsigned int maxNumber = 100;
  unsigned int digits    = 100;
  std::cin >> maxNumber >> digits;
  const unsigned int ExtraDigits = 15; 
  BigNum precision = 10;
  for (unsigned int i = 1; i < digits + ExtraDigits; i++)
    precision *= 10;
  std::vector<BigNum> roots(maxNumber + 1, 0);
  unsigned int sum = 0;
  for (unsigned int i = 1; i <= maxNumber; i++)
  {
    unsigned int intSqrt = 1;
    while (intSqrt * intSqrt < i)
      intSqrt++;
    if (intSqrt * intSqrt == i)
    {
      roots[i] = precision * intSqrt;
      continue;
    }
    auto factor = intSqrt - 1;
    while (i % factor != 0)
      factor--;
    if (factor > 1)
    {
      auto& current = roots[i] = roots[i / factor] * roots[factor];
      if (current.size() > roots[i - 1].size())
        current.erase(current.begin(), current.begin() + (current.size() - roots[i - 1].size()));
      while (current < roots[i - 1])
        current *= 10;
    }
    else
    {
      roots[i] = jarvis(i, precision);
    }
    sum += countDigits(roots[i], digits);
  }
  std::cout << sum << std::endl;
  return 0;
}
