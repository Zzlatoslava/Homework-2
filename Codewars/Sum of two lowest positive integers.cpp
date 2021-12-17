#include <vector>

long sumTwoSmallestNumbers(std::vector<int> num)
{
    long m = 99999999999999999, p = 999999999999999;
    if (num.size() > 1)
    {
        for (unsigned long i = 0; i < num.size(); ++i)
        {
            if ((num[i] < p) && (num[i] >= m))
            {
                p = num[i];
            }
            if (num[i] < m)
            {
                p = m;
                m = num[i];
            }
        }
        return m + p;
    }
    else {
        return num[0];
    }
}