#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int b;
	int sum;
	cin >> a >> b;
	int digits;
	int count;
	bool flag;
	int digit;
	for (int i = a; i <= b; i++)
	{
		digits = i;
		count = 0;
		sum = 0;
		flag = true;
		while (digits != 0)
		{
			digit = digits % 10;
			if (digit != 0) {
				if (i % digit != 0) flag = false;
			}
			else flag = false;
			digits /= 10;
		}
		if (flag)
		{
			cout << i << " ";
		}
	}


}
