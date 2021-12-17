bool is_square(int n)
{
    if (n < 0) {
        return false;
    }
    else if (n == 0 || n == 1) {
        return true;
    }
    else {
        for (int i = 2; i <= n; i++) {
            if (i * i == n) {
                return true;
            }

        }
        return false;
    }
}