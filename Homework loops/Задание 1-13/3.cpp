#include <iostream>
#include <cmath>
#include <locale.h>

int main3() {
    setlocale(LC_ALL, "RUS");
    double n, x, q, s;
    q = 0;
    std::cout << "������� n � x(� ��������): ";
    std::cin >> n >> x;
    for (int i = 0; i < n; i++) {
        s = sin(x);
        x = sin(x);
        q += s;
    }
    std::cout << q;
    return 0;
}