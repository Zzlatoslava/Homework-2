/*������ 5. ������� A=[a,b] ���������� ������������ �� ������� B=[c,d]. ���� ����� x �� ������� A, 
����� ��������������� �� ����� y �� ������� B.*/

#include <iostream>
int main5() {
    float a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;
    float y = 0;
    y = c + (x - a) * (d - c) / (b - a);
    std::cout << y;
    return 0;
}