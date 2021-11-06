#include <iostream>

int main6() {
    int n, i, step, m;
    std::cin >> n;
    m = n;
    step = 0;
    i = 0;
    while (n != 1 && n != 0) {
        if (n % 2 == 0) {
            n /= 2;
            step += 1;
        }
        else {
            n = n * 3 + 1;
            step += 1;
            if (n > m) {
                m = n;
            }
        }
    }
    std::cout << m << " " << step;
    return 0;
}