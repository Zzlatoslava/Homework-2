int countSmileys(std::vector<std::string> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == ":D" or arr[i] == ":)" or arr[i] == ":-D" or arr[i] == ":-)" or arr[i] == ":~D" or arr[i] == ":~)" or arr[i] == ";D" or arr[i] == ";)" or arr[i] == ";-D" or arr[i] == ";-)" or arr[i] == ";~D" or arr[i] == ";~)")
        {
            count += 1;
        }
    }
    return count;
}
