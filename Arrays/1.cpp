#include <iostream>

int main1() {
    int hin, min, sin, hout, mout, sout;
    std::cout << "Enter the start time : \n ";
    std::cin >> hin;
    std::cin >> min;
    std::cin >> sin;
    std::cout << "Enter the end time: \n ";
    std::cin >> hout;
    std::cin >> mout;
    std::cin >> sout;

    if (min > mout)
    {
        if (sin > sout)
        {
            std::cout <<  hout- hin << ":" << (60 + mout) - min << ":" << (60 + sout) - sin << std::endl;
        }
        else {
            std::cout <<  hout - hin << ":" << (60 + mout) - min << ":" << sout - sin << std::endl;
        }
    }
    else {
        if (sin > sout)
        {
            std::cout <<  hout- hin << ":" << mout - min << ":" << (60 + sout) - sin << std::endl;
        }
        else {
            std::cout <<  hout - hin  << ":" << mout - min << ":" << sout - sin << std::endl;
        }
    }
    return 0;
}