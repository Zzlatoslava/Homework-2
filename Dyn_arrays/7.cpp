/*�������� �������
void shiftArray(int A[], int n, in k)
������� ������������ ����������� ����� ��������� ������� �� k �����. ��������, ���� ��� ������
A[10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
�� ����� ������ ������� shiftArray(A, 10, 3); ������ ���������� ������ {3, 4, 5, 6, 7, 8, 9, 0, 1,2};*/


#include<iostream>

void shiftArray(int* A, int n, int k) {
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            A[n - k + i] = i;
        }
        else {
            A[i - k] = i;
        }
    }
}

int main() {
    int N, z;
    std::cin >> N >> z;
    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = i;
    }
    shiftArray(arr, N, z);
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}