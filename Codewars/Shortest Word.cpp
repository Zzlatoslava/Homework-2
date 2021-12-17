#include <string>
using namespace std;
int find_short(string str)
{
    int a = 0;
    int b = 9999999999999;
    for (int i = 0; i <= str.size(); i++) {

        if ((str[i] == ' ') || (str[i] == '\0')) {
            if (a < b) {
                b = a;
            }
            a = 0;
        }
        else {
            a++;
        }
    }
    return b;
}