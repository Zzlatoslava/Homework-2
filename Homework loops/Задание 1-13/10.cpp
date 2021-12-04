#include <iostream>
#include <string>

int main10() {
    int n, t, k, c;
    std::cout << "Enter your number in 10ns\n";
    std::cin >> n;
    std::string num;
 
    while (n != 0) {
        t = n % 16;

        if (t <= 9) {
            
            num = std::to_string(t) + num;
        }
        else {
            if (t == 10) {
                num = "A" + num;
            }
            else if (t == 11) {
                num = "B" + num;

            }
            else if (t == 12) {
                num = "C" + num;

            }
            else if (t == 13) {
                num = "D" + num;


            }
            else if (t == 14) {
                num = "E" + num;

            }
            else if (t == 15) {
                num = "F" + num;

            }
        }
        n /= 16;
    }



    std::cout << "Here is your number in 10ns:  "<< num;
    return 0;

}