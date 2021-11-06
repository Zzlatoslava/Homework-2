#include <iostream>


int main() {
    long long  num, t, k, c ;
    std::cout << "Enter your number in 10ns\n";
    std::cin >> num;
    t = 1;
    k = 0;
    c = num;
    while (num != 0){
        k += (num%2)*t;
        std::cout << k << "\n"; 
        num /= 2;
        t *= 10;
       
    }
    std::cout << "Here is your number:  " << k;
    return 0;

}