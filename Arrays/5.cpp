#include<iostream>

int main() {
    int N;
    std::cout << "Enter the quantity of numbers : ";  
    std::cin >> N;
    int num[1000] ;
    std::cout << "Enter numbers: \n ";
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[num];
    }
    int max = 0;
    int index = 0;
    for (int i = 1; i <= N; ++i) {
        if ((num[i] + num[i + 1]) > max) {
            max = num[i] + num[i + 1];
            index = i;
        }
    }
    std::cout << "Summ " << num[index] << " and " << num[index+1] << " maximal" ;
    return 0;
}
