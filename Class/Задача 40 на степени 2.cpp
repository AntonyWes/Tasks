#include <iostream>
#include <string>

using namespace std;

string Duplicate(string a)
{
	int n = 0;
	int ASize = a.size();
	int res = 0;
	string result;
	string digit;

	for (int i = ASize-1; i >= 0; i--)
	{
		res = (a[i] - 48) * 2 + n;
		if (res >= 10) {
			n = 1;
			res -= 10;
		}
		else n = 0;
		
		result.insert(0, 1, char(res + 48));
	}
	if (n == 1) result.insert(0, 1, '1');
	

	return result;
}

int main()
{
	int ai;
	string result;
	for (int i = 0; i < 3; i++) {

		result = "2";
		cin >> ai;
		if (ai > 1000)
		{
			cout << " Число больше 1000";
		}
		else
		{

			for (int i = 1; i < ai; i++)
			{
				result = Duplicate(result);
			}
		}
		printf("2 ^ %d = %s\n", ai, result.c_str());
	}
	return 0;
}
