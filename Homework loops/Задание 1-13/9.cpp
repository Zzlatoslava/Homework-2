#include <iostream>


int main9() {
    long long  num, t, k;
    std::cout << "Enter your number in 10ns\n";
    std::cin >> num;
    t = 1;
    k = 0;
    
    while (num != 0){
        k += (num%2)*t; 
        num /= 2;
        t *= 10;
       
    }
    std::cout << "Here is your number:  " << k;
    return 0;

}