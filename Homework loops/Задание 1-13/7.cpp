#include <iostream>
int main() {
    int n;
    std::cout << "Enter n:";
    std::cin >> n;
    double f = 0.;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX, y = (double)rand() / RAND_MAX;
        f += (x * x + y * y);
        if (f <= 1) {
            f += 1;
        }
    }
    std::cout << (f / (double)n) << std::endl;
    return 0;
}