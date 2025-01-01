/*Write code to change the value of a pointer. 
Write code to changge the value to which the pointer points.*/

#include <iostream>

int main()
{
  int v1 = 1;
  int *p1 = &v1;

  std::cout << p1 << std::endl;

  *p1 = 0;

  std::cout << v1 << std::endl;

  int v2 = 2;
  int *p2 = &v2;

  p2 = 0;

  std::cout << v2 << p2 << std::endl;
}