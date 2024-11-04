/*
Write a program that prompts the user for two integers. 
Print each number in the range specified by those two integers

revise the program so that it works regardless of which number is bigger
*/

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two integers to return range" << std::endl;
    std::cin >> v1 >> v2;

    int val = 0;
    int maxval = 0;

    if (v2 > v1) {
        val = v1;
        maxval = v2;
    }
    else {
        val = v2;
        maxval = v1;
    }

    std::cout << val << " ";
    while (val < maxval) {
        ++val;
        std::cout << val << " ";
    }

    return 0;
}
