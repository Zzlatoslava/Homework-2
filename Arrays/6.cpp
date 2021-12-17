/*��� ������������� ������ ������� N, �� ���������� ���������� �����. ���������, �������� �� ��� �������� �������������� ����������.
���� ��������, �� ������� �������� ����������, ���� ��� -- ������� 0.*/

#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "RUS");
    int N, ProgresDif = 0 ;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;
    std::cout << "Enter array:  ";
    std::vector <int> A(N);
    for (int i = 0; i < N; ++i) {  //���� ���������� 
        std::cin >> A[i];
    }
    for (int i = 0; i < 2; i++) {
        ProgresDif = A[i + 1] - A[i];   // �������� ���������� 
    }
    for (int i = 1; i < N; i++) {
        if (A[i] - A[i - 1] != ProgresDif) {    // �������� �� ������� ���������� 
            ProgresDif =  0;
        }
        
    }
    std::cout << "Progression difference:   " << ProgresDif;
}