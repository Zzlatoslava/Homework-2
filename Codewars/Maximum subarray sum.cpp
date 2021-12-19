#include <vector>
int maxSequence(const std::vector<int>& arr) {
    int csum = 0, asum = 0;
    for (int start = 0; start < arr.size(); start++) {
        for (int i = 0; i < arr.size(); i++)
        {
            csum = 0;
            for (int q = start; q <= i; q++)
            {
                csum += arr[q];
            }
            asum = std::max(asum, csum);
        }
    }
    return asum;
}