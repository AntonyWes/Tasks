#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int size_a = a.size()-1;
	for (int i = 0; i < size_a; i++)
	{
		if (a[i] == a[i + 1])
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
