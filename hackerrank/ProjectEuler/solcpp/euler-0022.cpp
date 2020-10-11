#include <iostream>
#include <string>
#include <map>
#include <set>
std::string readName()
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
  std::set<std::string> names;
#ifdef ORIGINAL
  while (true)
  {
    auto name = readName();
    if (name.empty())
      break;
    names.insert(name);
  }
#else
  unsigned int numNames;
  std::cin >> numNames;
  while (numNames--)
  {
    std::string name;
    std::cin >> name;
    names.insert(name);
  }
#endif
  std::map<std::string, unsigned int> sorted;
  unsigned int pos = 1;
  for (auto name : names)
    sorted[name] = pos++;
#ifdef ORIGINAL
  unsigned int sum = 0;
  for (auto name : sorted)
  {
    unsigned int value = 0;
    for (auto c : name.first)
      value += c - 'A' + 1;
    sum += value * name.second;
  }
  std::cout << sum << std::endl;
#else
  unsigned int queries;
  std::cin >> queries;
  while (queries--)
  {
    std::string name;
    std::cin >> name;
    unsigned int value = 0;
    for (auto c : name)
      value += c - 'A' + 1;
    value *= sorted[name];
    std::cout << value << std::endl;
  }
#endif
  return 0;
}
