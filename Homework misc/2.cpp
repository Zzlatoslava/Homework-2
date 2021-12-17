/*������ 2. ��������� ������������ ����� ����������� ��������� ax^2+bx+c=0. �� ���� �������� ������������ a, b, c.
����������� ������ ��� ��������� �������� �������� �������������.*/

#include <iostream>
#include <cmath>
int main2() {

	float a, b, c;
	std::cout << "Input a,b,c\n";
	std::cin >> a >> b >> c;
	float d = b * b - 4 * a * c;
	if (d < 0)
	{
		std::cout << "No roots";
	}
	else if (d == 0)
	{
		std::cout << "The equation has 1 root: " << -b / 2 / a;
	}
	else
	{
		float x1 = (-b + sqrt(d)) / 2 / a;
		float x2 = (-b - sqrt(d)) / 2 / a;
		std::cout << "The equation has 1 root: " << x1 << " � " << x2;
	}
	return 0;
}