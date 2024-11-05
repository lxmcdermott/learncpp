#include <iostream>
#include "textbook/GCC_4_7_0/1/Sales_item.h"

int main()
{
  Sales_item Item1, Item2;

  std::cin >> Item1 >> Item2;

  std::cout << Item1 + Item2 << std::endl;

  return 0;
}

