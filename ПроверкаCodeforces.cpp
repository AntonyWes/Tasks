#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	string codeforces = "codeforces";
	cin >> num;
	string let;
	bool mass[26];
	if (1 <= num && num <= 26) {
		for (int i = 0; i < num; i++)
		{
			cin >> let;
			if (codeforces.find(let) != string::npos)
			{
				mass[i] = true;
			}
			else mass[i] = false;
		}
	}
	else cout << "Number isn`t between 1 to 26" << endl;
	for (int i = 0; i < num; i++) 
	{
		if (mass[i])
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}

}