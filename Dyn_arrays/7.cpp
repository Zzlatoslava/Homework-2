#include<iostream>

void shiftArray(int A[], int n, int k)
{
    int a;
    k = k % n;
    for (int i = 0; i < k; ++i)
    {
        a = A[0];
        for (int j = 0; j < n - 1; ++j) A[j] = A[j + 1];
        A[n - 1] = a;
    }
}

int main() {
    int N, z;
    std::cout << "Enter array size and shift: ";
    std::cin >> N >> z;
    int* arr = new int[N];
    std::cout << "Enter array ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    shiftArray(arr, N, z);
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
