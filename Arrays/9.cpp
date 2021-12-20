

#include <iostream>


int main() {

    int N, ArithProg, summ = 0;
    std::cout << "Enter the number of numbers: "; 
    std::cin >> N;
    int arr[10000];
    ArithProg = ((2 + N - 1) * N) / 2;    
    std::cout << "Enter sequence: \n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        ArithProg -= arr[i];
    }
    std::cout << "Missing number: " << ArithProg ;
    return 0;
}
