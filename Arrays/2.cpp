#include <iostream>
int main() {
	int N;
	double x;
	int s = 0;
	std::cin >> N >> x;
	double q = 1;
	int* a = new int[N + 1];
	for (int i = 0; i <= N; ++i) {
		std::cout << i << "|";
		std::cin >> a[i];
		s += a[i] * q;
		q *= x;
	}
	std::cout << s << std::endl;
	delete[] a;
	return 0;
}