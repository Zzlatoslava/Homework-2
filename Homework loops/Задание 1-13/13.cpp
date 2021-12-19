#include <iostream> 


int main()
{

    int x;
    do {
        std::cout << "Input natural number from 1 to 3999: ";
        std::cin >> x;
    } while (x <= 0 or x > 3999);

    int digit1 = x / 1000;

    switch (digit1) {
    case 1: std::cout << "M"; break;
    case 2: std::cout << "MM"; break;
    case 3: std::cout << "MMM"; break;
    }

    int digit2 = x / 100 % 10;

    switch (digit2) {
    case 1: std::cout << "C"; break;
    case 2: std::cout << "CC"; break;
    case 3: std::cout << "CCC"; break;
    case 4: std::cout << "CD"; break;
    case 5: std::cout << "D"; break;
    case 6: std::cout << "DC"; break;
    case 7: std::cout << "DCC"; break;
    case 8: std::cout << "DCCC"; break;
    case 9: std::cout << "CM"; break;
    }

    int digit3 = x / 10 % 10;

    switch (digit3) {
    case 1: std::cout << "X"; break;
    case 2: std::cout << "XX"; break;
    case 3: std::cout << "XXX"; break;
    case 4: std::cout << "XL"; break;
    case 5: std::cout << "L"; break;
    case 6: std::cout << "LX"; break;
    case 7: std::cout << "LXX"; break;
    case 8: std::cout << "LXXX"; break;
    case 9: std::cout << "XC"; break;
    }

    int digit4 = x % 10;

    switch (digit4) {
    case 1: std::cout << "I"; break;
    case 2: std::cout << "II"; break;
    case 3: std::cout << "III"; break;
    case 4: std::cout << "IV"; break;
    case 5: std::cout << "V"; break;
    case 6: std::cout << "VI"; break;
    case 7: std::cout << "VII"; break;
    case 8: std::cout << "VIII"; break;
    case 9: std::cout << "IX"; break;
    }

    return 0;
}