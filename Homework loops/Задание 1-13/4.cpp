#include <iostream>

int main_4 () {

    double pi, N, dx, x;
    std::cout << "Please enter the required accuracy\n";
    std::cin >> dx;
    N = 0;
    pi = 4;
    x = 1;
    while (fabs(pi) >= dx) {
        N += 1;
        pi += 4 / x;
        x += 2;
    }
    std::cout << N << pi;
    return 0;
}

//ÍÅÒ ÐÅØÅÍÈß 