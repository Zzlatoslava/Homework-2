#include <iostream>


int main3()
{
    std::cout << "Enter the number of rows of the rhomb ";
    int num, i;
    std::cin >> num;

    for (i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++) std::cout << " ";
        for (int k = 0; k < i * 2 - 1; k++) std::cout << "*";
        std::cout << std::endl;
    }

    i -= 2;

    for (; i >= 0; i--)
    {
        for (int j = 0; j < num - i; j++) std::cout << " ";
        for (int k = 0; k < i * 2 - 1; k++) std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}