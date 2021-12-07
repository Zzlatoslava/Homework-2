#include <iostream>
#include <cmath>

int main7() {
    int n; 
    int rpf = 1; 
    int temp = 0;
    int rooms = 0;
    int floor = 0;
    std::cin >> n;
    while (n > 0) {
        if (rpf == temp) {
            temp = 0;
            rpf++;
        }
        else if (n - rpf > 0) {
            rooms += rpf;
            temp++;
            floor++;
            n -= rpf;
        }
        else break;
    }
    std::cout << floor + 1 << " " << n;
    return 0;
}