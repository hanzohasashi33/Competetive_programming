#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
  unsigned int tests = 1;
#ifndef ORIGINAL
  std::cin >> tests;
#endif
  while (tests--)
  {
    unsigned int numRows = 15;
#ifndef ORIGINAL
    std::cin >> numRows;
#endif
    std::vector<unsigned int> last(1);
    std::cin >> last[0];
    for (unsigned int row = 1; row < numRows; row++)
    {
      unsigned int numElements = row + 1;
      std::vector<unsigned int> current;
      for (unsigned int column = 0; column < numElements; column++)
      {
        unsigned int x;
        std::cin >> x;
        unsigned int leftParent = 0;
        if (column > 0)
          leftParent = last[column - 1];
        unsigned int rightParent = 0;
        if (column < last.size())
          rightParent = last[column];
        unsigned int sum = x + std::max(leftParent, rightParent);
        current.push_back(sum);
      }
      last = current;
    }
    std::cout << *std::max_element(last.begin(), last.end()) << std::endl;
  }
  return 0;
}
