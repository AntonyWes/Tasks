#include <iostream>
#include <string>

using namespace std;

int SumOfDigits(int n) 
{
	int Sum = 0;
	while (n > 0)
	{
		Sum += n % 10;
		n /= 10;
	}
	return Sum;
}


int main()
{
	int n;
	cin >> n;
	cout << SumOfDigits(n);
	return 0;
}
