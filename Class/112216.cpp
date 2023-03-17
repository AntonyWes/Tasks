#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int digits[10] = {};
	int digit;
	while (a != 0)
		{
			digit = a % 10;
			if (digits[digit] == 0) digits[digit]++;
			else
			{
				cout << "YES";
				return 0;
			}
			a /= 10;
		}
	cout << "NO";
	return 0;

}
