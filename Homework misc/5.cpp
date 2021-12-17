/*«адача 5. ќтрезок A=[a,b] непрерывно отображаетс€ на отрезок B=[c,d]. ƒана точка x из отрезка A, 
найти соответствующий ей образ y из отрезка B.*/

#include <iostream>
int main5() {
    float a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;
    float y = 0;
    y = c + (x - a) * (d - c) / (b - a);
    std::cout << y;
    return 0;
}