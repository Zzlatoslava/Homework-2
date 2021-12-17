/*������ 6. ������� � ������� ������ ������� �������� ������������ (x^2 + y^2 - 1)^3 - x^2 y^3 <= 0. x �������� �� -1.5 �� 1.5,
y �������� �� -1.5 �� 1.5. ������� ������ � height=21 ����� �� width=41 ��������. 
������ ������ � ������ ������ ������������� ����� (-1.5, 1.5),
� ��������� (width) ������ � ��������� (height) ������ ����������� ����� (1.5, -1.5). 
���� ���������� ����� ������������� �����������, 
�� �������� ������ *, ����� ������ .*/

#include<cmath>
#include<iostream>
int main6() {
	setlocale(LC_ALL, "russian");
	const float height = 21., width = 41.;
	for (float y = -1.5; y <= 1.5; y += 3. / height) {
		for (float x = -1.5; x <= 1.5; x += 3. / width) {
			float f = pow(x * x + y * y - 1, 3) - x * x * y * y * y;
			if (f <= 0) {
				std::cout << "*";
			}
			else {
				std::cout << ".";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}