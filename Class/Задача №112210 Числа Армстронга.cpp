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
	bool flag = true;
	for (int i = a; i <= b;i++) 
	{
		digits = i;
		count = 0;
		sum = 0;
		while (digits != 0) 
		{
			digits /= 10;
			count++;
		}
		digits = i;
		while (digits != 0)
		{
			sum += pow(digits % 10, count);
			digits /= 10;
		}
		if (sum == i)
		{
			cout << sum << " ";
			flag = false;
		}
	}
	if (flag) cout << "-1";

	
}

