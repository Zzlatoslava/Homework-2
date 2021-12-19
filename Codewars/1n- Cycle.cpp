int cycle(int n) {
    int i = 0;
    int value = 1;
    if (n % 2 == 0 || n % 5 == 0)
        return -1;
    while (++i) {
        value = value * 10 % n;
        if (value == 1)
            return i;
    }
}