#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "RUS");
    int N, ArithProg, summ = 0;
    std::cout << "Enter the number of numbers: "; 
    std::cin >> N;
    std::vector <int> A(N);
    ArithProg = ((2 + N - 1) * N) / 2;    // Находим сумму всех элементов если бы не было пропуска 
    std::cout << "Enter sequence: \n";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
        ArithProg -= A[i];
    }
    std::cout << "Missing number: " << ArithProg ;
    return 0;

}
