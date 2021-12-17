#include <string>
using namespace std;
string reverse_words(string str)
{
    string result;
    string word;
    for (int i = 0; i <= str.size(); i++) {

        if ((str[i] == ' ') || (str[i] == '\0')) {
            reverse(word.begin(), word.end());
            if (str[i] != '\0') {
                result += word + str[i];
            }
            else {
                result += word;
            }
            word.clear();
        }
        else {
            word += str[i];
        }
    }
    return result;
}