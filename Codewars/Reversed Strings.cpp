#include <string>
using namespace std;

string reverseString(string str)
{
    std::string resh;
    for (int i = str.length() - 1; i >= 0; i--) {
        resh += str[i];
    }
    return resh;
}