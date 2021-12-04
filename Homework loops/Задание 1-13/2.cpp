#include <iostream>

int main2() {

    double n, i, S, t;
    std::cin >> n;
    S = 1;
    t = 1;
    for (i = 1; i <= n; i++) {
        t *= 0.5;
        S += t;
        std::cout << t << " " << S << std::endl;
    }
    std::cout << S;
    return 0;
}