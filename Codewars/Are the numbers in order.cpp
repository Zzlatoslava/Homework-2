bool isAscOrder(std::vector<int> arr)
{
    int c = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i - 1] < arr[i]) {
            c *= 1;
        }
        else {
            return false;
        }
    }
    if (c == 1) {
        return true;
    }
}