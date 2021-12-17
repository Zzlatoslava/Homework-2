bool XO(const std::string& str)
{
    int c_x = 0;
    int c_o = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'x' || str[i] == 'X') {
            c_x += 1;
        }
        else if (str[i] == 'o' || str[i] == 'O') {
            c_o += 1;
        }
    }
    if (c_o != c_x) {
        return false;
    }
    else {
        return true;
    }
}