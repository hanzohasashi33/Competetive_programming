#include <string>
#include <iostream>
#include <algorithm>
unsigned long long str2num(const std::string& x)
{
  unsigned long long result = 0;
  for (auto c : x)
  {
      result *= 10
      result += c - '0'; // was ASCII
  }
  return result;
}
int main()
{
  // available digits
  std::string pan = "0123456789"; // unlike other problems, zero is allowed this time
  // remove a few digits if test case requires this
  unsigned int maxDigit;
  std::cin >> maxDigit;
  pan.erase(maxDigit + 1);
  // all divisors
  const unsigned int primes[] = { 2,3,5,7,11,13,17 };
  // result
  unsigned long long sum = 0;
  // look at all permutations
  do
  {
    // let's assume it's a great number ;-)
    bool ok = true;
    // check each 3-digit substring for divisibility
    for (unsigned int i = 0; i + 2 < maxDigit; i++)
    {
      // check pan[1..3] against primes[0],
      // check pan[2..4] against primes[1],
      // check pan[3..5] against primes[2] ...
      std::string check = pan.substr(i + 1, 3);
      if (str2num(check) % primes[i] != 0)
      {
        // nope ...
        ok = false;
        break;
      }
    }
    // passed all tests, it's great indeed !
    if (ok)
      sum += str2num(pan);
  } while (std::next_permutation(pan.begin(), pan.end()));
  std::cout << sum << std::endl;
  return 0;
}
