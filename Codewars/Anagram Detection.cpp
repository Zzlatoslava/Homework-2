#include <string>
#include <algorithm>
bool isAnagram(std::string test, std::string original) {
    std::vector<char> vec1, vec2;
    for (int i = 0; i < test.length(); ++i) {
        vec1.push_back(tolower(test[i]));
    }
    for (int i = 0; i < original.length(); ++i) {
        vec2.push_back(tolower(original[i]));
    }
    std::sort(vec1.begin(), vec1.end());
    std::sort(vec2.begin(), vec2.end());
    return(vec1 == vec2);
}