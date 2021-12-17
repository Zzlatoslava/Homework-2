bool narcissistic(int value) {
    int deg = 0;
    int n = value;
    int n1 = value;
    int res = 0;
    while (n != 0) {
        deg += 1;
        n /= 10;
    }
    while (n1 != 0) {
        int pow = n1 % 10;
        for (int i = 1; i < deg; i++) {
            pow *= n1 % 10;
        }
        res += pow;
        n1 /= 10;
    }
    if (res == value) {
        return true;
    }
    else {
        return false;
    }
}