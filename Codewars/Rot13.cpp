#include <string>
using namespace std;

string rot13(string msg)
{
    for (int i = 0; i < msg.length(); i++) {
        if (isalpha(msg[i])) {
            if (msg[i] >= 'a' && msg[i] <= 'm')
                msg[i] = msg[i] + 13;
            else if (msg[i] >= 'n' && msg[i] <= 'z')
                msg[i] = msg[i] - 13;
            else if (msg[i] >= 'A' && msg[i] <= 'M')
                msg[i] = msg[i] + 13;
            else if (msg[i] >= 'N' && msg[i] <= 'Z')
                msg[i] = msg[i] - 13;
        }
    }
    return msg;
}