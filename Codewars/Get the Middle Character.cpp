std::string get_middle(std::string input)
{
    std::string t;
    if (input.length() % 2 == 0) {
        for (int i = (input.length() / 2 - 1); i <= input.length() / 2; i++) {
            t += input[i];
        }
        return t;
    }
    else if (input.length() % 2 != 0) {
        for (int i = (input.length() / 2); i <= input.length() / 2; i++) {
            t += input[i];
        }
        return t;
    }
}