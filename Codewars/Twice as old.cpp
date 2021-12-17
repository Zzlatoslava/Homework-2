int twice_as_old(int dad, int son) {
    int raz = dad - son;
    if (dad - (raz * 2) >= 0)
    {
        return dad - (raz * 2);
    }
    else {
        return (raz * 2) - dad;
    }
}