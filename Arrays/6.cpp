/*Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию.
Если образуют, то вывести разность прогрессии, если нет -- вывести 0.*/

#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "RUS");
    int N, ProgresDif = 0 ;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;
    std::cout << "Enter array:  ";
    std::vector <int> A(N);
    for (int i = 0; i < N; ++i) {  //Ввод прогрессии 
        std::cin >> A[i];
    }
    for (int i = 0; i < 2; i++) {
        ProgresDif = A[i + 1] - A[i];   // Разность прогрессии 
    }
    for (int i = 1; i < N; i++) {
        if (A[i] - A[i - 1] != ProgresDif) {    // Проверка на наличие прогрессии 
            ProgresDif =  0;
        }
        
    }
    std::cout << "Progression difference:   " << ProgresDif;
}