#include <iostream>
#include "/home/loganatorspace/Projects/learncpp/textbook/GCC_4_7_0/1/Sales_item.h"

int main()
{
  Sales_item Item1;
  std::cin >> Item1;

  while (true) {
    std::cout << "Enter a sales item or press Ctrl+D to end:" << std::endl;
    if (!(std::cin >> Item1)) {
      std::cerr << "Invalid input or end of input. Exiting" << std::endl;
      break;
    }
    std::cout << "you entered:" << Item1 << std::endl;
  }
  return 0;

}