#include<iostream>

void shiftArray(int A[], int n, int k) {
    int a;
    if (k > 0) {
        while (k > 0) {
            a = A[0];
            for (int i = 0; i < n - 1; ++i) {
                A[i] = A[i + 1];
            }
            A[n - 1] = a;
            --k;
        }
        
    }
    else {
        k = -k;
        int c;
        int t;
        for (int i = 0; i < n / 2; ++i) {
            c = A[i];
            A[i] = A[n - 1 - i];
            A[n - 1 - i] = c;
        }
        while (k > 0) {
            a = A[0];
            for (int i = 0; i < n - 1; ++i) {
                A[i] = A[i + 1];
            }
            A[n - 1] = a;
            --k;
        }
        for (int i = 0; i < n / 2; ++i) {
            t = A[i];
            A[i] = A[n - 1 - i];
            A[n - 1 - i] = t;
        }
        
    }
}


int main(){
    int N, k;
    std::cout << "Enter array size and shift: ";
    std::cin >> N >> k;
    int* arr = new int[N];
    std::cout << "Enter array ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    shiftArray(arr, N, k);
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
