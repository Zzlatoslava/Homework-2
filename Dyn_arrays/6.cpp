#include<iostream>
#include<string>

std::string to_aligned_right_row(int number, int spaces) {
   std::string result;
    int q ;
    char c;
    while (number != 0) {
        q = number % 10;
        c = (char)(q + 48);
        result = c + result;
        number /= 10;
    }


    int number_of_digits = 0;

    do {
        ++number_of_digits;
        number /= 10;
    } while (number);

    int diff = spaces - number_of_digits;

    for (int i = 0; i < diff; ++i) {
        result += " ";
    }
    int number_of_digits = 0;

    do {
        ++number_of_digits;
        number /= 10;
    } while (number);

    int diff = spaces - number_of_digits;

    for (int i = 0; i < diff; ++i) {
        result = " " + result;
    }

    return result;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    int** arr = new int* [M];
    int* spaces = new int[M];

    for (int i = 0; i < M; ++i) {
        arr[i] = new int[N];
        int max = 0;

        for (int j = 0; j < N; ++j) {
            arr[i][j] = rand() % 100000;

            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        int number_of_digits = 0;

        do {
            ++number_of_digits;
            max /= 10;
        } while (max);

        spaces[i] = number_of_digits;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << to_aligned_right_row(arr[j][i], spaces[j]) << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < M; ++i) {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}
