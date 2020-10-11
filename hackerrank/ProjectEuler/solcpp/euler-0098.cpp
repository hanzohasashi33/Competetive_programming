#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <iostream>
unsigned long long fingerprint(unsigned long long x)
{
  unsigned long long result = 0;
  while (x > 0)
  {
    auto digit = x % 10;
    x /= 10;
    result += 1LL << (4 * digit);
  }
  return result;
}
#ifdef ORIGINAL 
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
unsigned long long match(const std::string& a, const std::string& b, const std::vector<unsigned long long>& squares)
{
  unsigned long long result = 0;
  for (auto i : squares)
    for (auto j : squares)
    {
      if (i == j)
        continue;
      auto replaceA = std::to_string(i);
      auto replaceB = std::to_string(j);
      std::map<char, char> replaceTable;
      bool valid = true;
      for (size_t k = 0; k < replaceA.size(); k++)
      {
        char original = replaceA[k];
        if (replaceTable.count(original) != 0 &&
            replaceTable[original] != a[k])
          valid = false;
        replaceTable[original] = a[k];
      }
      std::set<char> used;
      for (auto x : replaceTable)
      {
        if (used.count(x.second) != 0)
          valid = false;
        used.insert(x.second);
      }
      if (!valid)
        continue;
      std::string aa;
      for (auto x : replaceA)
        aa += replaceTable[x];
      if (aa != a)
        continue;
      std::string bb;
      for (auto x : replaceB)
        bb += replaceTable[x];
      if (bb != b)
        continue;
      if (result < i)
        result = i;
      if (result < j)
        result = j;
    }
  return result;
}
int main()
{
  std::map<std::string, std::vector<std::string>> anagrams;
  while (true)
  {
    auto word = readWord();
    if (word.empty())
      break;
    auto sorted = word;
    std::sort(sorted.begin(), sorted.end());
    anagrams[sorted].push_back(word);
  }
  size_t maxDigits = 0;
  for (auto i : anagrams)
    if (i.second.size() > 1) 
      if (maxDigits < i.second.front().size())
        maxDigits = i.second.front().size();
  unsigned long long maxNumber = 1;
  for (size_t i = 0; i < maxDigits; i++)
    maxNumber *= 10;
  std::map<unsigned long long, std::vector<unsigned long long>> permutations;
  std::map<unsigned int,       std::set   <unsigned long long>> fingerprintLength;
  unsigned long long base = 1;
  while (base*base <= maxNumber)
  {
    auto square = base*base;
    auto id     = fingerprint(square);
    permutations[id].push_back(square);
    auto numDigits = log10(square - 1) + 1;
    fingerprintLength[numDigits].insert(id);
    base++;
  }
  unsigned long long result = 0;
  for (auto i : anagrams)
  {
    auto pairs = i.second;
    if (pairs.size() == 1)
      continue;
    auto length = pairs.front().size();
    for (size_t i = 0; i < pairs.size(); i++)
      for (size_t j = i + 1; j < pairs.size(); j++)
      {
        for (auto id : fingerprintLength[length])
        {
          auto best = match(pairs[i], pairs[j], permutations[id]);
          if (result < best)
            result = best;
        }
      }
  }
  std::cout << result << std::endl;
}
#else 
int main()
{
  unsigned int digits;
  std::cin >> digits;
  unsigned long long minNumber = 1;
  for (unsigned int i = 1; i < digits; i++)
    minNumber *= 10;
  unsigned long long maxNumber = minNumber * 10 - 1;
  unsigned long long base = sqrt(minNumber);
  if (base*base < minNumber)
    base++;
  std::map<unsigned long long, std::vector<unsigned long long>> permutations;
  while (base*base <= maxNumber)
  {
    auto square = base*base;
    permutations[fingerprint(square)].push_back(square);
    base++;
  }
  size_t bestCount = 0;
  unsigned long long highestSquare = 0;
  for (auto p : permutations)
  {
    auto size = p.second.size();
    auto high = p.second.back();
    if (bestCount == size && highestSquare < high)
      highestSquare = high;
    if (bestCount <  size)
    {
      bestCount     = size;
      highestSquare = high;
    }
  }
  std::cout << highestSquare << std::endl;
}
#endif
