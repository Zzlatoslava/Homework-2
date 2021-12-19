int digital_root(int n)
{
    int summ = 0;
    while (true) {
        while (n != 0) {
            summ += n % 10;
            n /= 10;
        }
        if (summ < 10) {
            return summ;
        }
        else {
            n = summ;
            summ = 0;
        }
    }
}