#include<iostream>
int main()
{
	int flag;
	long long a = 0;
	long long R;
	std::cout << "Enter the radius :";
	std::cin >> R;
	long long f = R;
	long long d = R * R;
	for (long long x = f; x >= f / 2; --x)
	{
		flag = 0;
		for (long long y = R; y >= 0; --y)
		{
			if (x*x + y * y <= d) break;
			++a;
			++flag;
		}
		if (flag == 0) break;
		--R;
	}
	std::cout << (d * 4 - a * 8 + 4 * (f - R) + f * 4 + 1);
	return 0;
}
