#include <string>
std::string duplicate_encoder(const std::string& word) {
    std::string b;
    int a;
    for (int i = 0; i < word.length(); ++i)
    {
        a = 0;
        for (int j = 0; j < word.length(); ++j)
        {
            if ((std::tolower(word[j]) == std::tolower(word[i])) & (i != j)) a = a + 1;
        }
        if (a == 0) b += "(";
        else b += ")";
    }
    return b;
}