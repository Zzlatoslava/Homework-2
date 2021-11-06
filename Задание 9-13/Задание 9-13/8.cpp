#include <iostream>

int main8() {
    int N, s, p;
    std::cin >> N;
    s = 0;
    p = 1;
    while (N != 0) {
        s += (N % 10);
        p *= (N % 10);
        N /= 10;
    }
    std::cout << s << " " << p;
    return 0;
}