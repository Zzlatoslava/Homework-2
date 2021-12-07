#include <iostream>
#include <vector>

int main5() {
    int n1, n2, max, N;
    max = 0;
    n1 = 0;
    n2 = 0;
    std::cout << "Enter the quantity of numbers : ";
    std::cin >> N;
    std::cout << "Enter numbers: \n";
    std::vector <int> num(N);
    for (int i = 0; i < N; i++) {
        std::cin >> num[i];
    }

    for (int p = 1; p < N; p++) {
        if (num[p-1] + num[p ] > max) {
            n1 = num[p-1];
            n2 = num[p ];
            max = num[p-1] + num[p];
        }
    }
    std::cout << "Summ " << n1 << " and " << n2 << " maximal";
    return 0;
}