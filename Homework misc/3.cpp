/*������ 3. �� ���� �������� ���������� ����� �� ���������. ���������, �������� �� ��� � ������, ������������ 
������������� ����� �������� ������� ���������� ������� R � ���������� ���������� ������� r.*/


#include <iostream>
int main3() {
	
	float x, y, R, r;
	std::cout << "Enter �,�";
	std::cin >> x >> y;
	std::cout << "Enter R,r";
	std::cin >> R >> r;
	int a = x * x + y * y;
	if ((a < R * R) && (a > r * r))
	{
		std::cout << "in";
	}
	else {
		std::cout << "out";
	}
	return 0;
}