#include <iostream>
#include <string>

using namespace std;

int main()
{
	string x;
	int n;
	int a[50];
	cin >> x; //56
	n = x.size();
	for (int i = 0;i < n;i++)
	{
		a[i] = x[n - i - 1] - 48;
	}
	for (int i = 0;i < n;i++)
	{
		cout << a[i]; //65
	}
	cout << endl;

	int r = 1;
	int m = 2;
	long ch = 0,zn = n;
	for  (int i = 0; i < n;i++)
	{
		ch = ch + a[i] * r; 
		r = r * 10;
	}
	cout << ch << endl; //56

	long long mass[5] = {0, 1, 1, 2, 3};

	for (int i = 6; i <= ch; i++)
	{
		mass[0] = mass[1];
		mass[1] = mass[2];
		mass[2] = mass[3];
		mass[3] = mass[4];
		mass[4] = mass[3] + mass[2];
	}

	for (int i = 4; i >= 0;i--)
	{
		cout << i+1 << "_" << mass[i] << endl;
	}
	/*  5_139583862445
		4_86267571272
		3_53316291173
		2_32951280099
		1_20365011074
	*/
}
