/*������ 4. ��������� ����� 1+x+x^2+x^3+... � �������� ����� �� ��� ���, ���� �������� ���������� 
���������� �� ������ ������ ��������� eps. �������� ��������� � 1/(1-x). x �������� � ��������� (-1,1).*/

#include<cmath>
#include<iostream>
int main4() {
	float x, eps;
	std::cin >> x >> eps;
	float sum = 0, n = 1;
	while (abs(n) >= eps) {
		sum += n;
		n *= x;
	}
	std::cout << sum << "  " << 1 / (1 - x);
	return 0;
}