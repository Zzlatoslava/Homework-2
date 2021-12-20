#include <iostream>
#include <string>

std::string reverse_words(std::string str)
{
    int q = str.length();
    int p = 0;
    int c = 0;
    char s;

    while (c < q)
    {
        while (str[p] == ' ')
            p++;

        while (c != q - 1 && str[c + 1] != ' ')
            c++;

        for (int i = p; i < p + (c - p + 1)/2; i++){
            s =  str[c - (i - p)];
          str[c - (i - p)] = str[i];
          str[i] = s;
}
        p = ++c;
    }

    return str;
}
