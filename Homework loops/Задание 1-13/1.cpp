#include <iostream>

int main1() {

    double n, i, S;
    std::cin >> n;
    S = 0;

    for (i = 1; i <= n; i++) {
        S += 1 / i;
    }
    std::cout << S;
    return 0;
}