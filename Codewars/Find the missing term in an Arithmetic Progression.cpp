static long findMissing(std::vector<long> list) {
    int dif = 0;
    for (int i = 1; i < 2; i++) {
        if (list[i] - list[i - 1] == list[i + 1] - list[i]) {
            dif = list[i] - list[i - 1];
        }
        else {
            dif = list[i + 1] - list[i];
        }
    }
    for (int p = 1; p < list.size(); p++) {
        if (list[p] - list[p - 1] != dif) {
            return list[p - 1] + dif;
        }
    }
}