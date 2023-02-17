#include <iostream>
#include <string>

using namespace std;

int main()
{
	int mainnum = 0;
	int num = 0;
	int x = 0;
	int y = 0;
	string command;
	cin >> mainnum;
	bool mass[1000] = {};
	for (int i = 0; i < mainnum; i++)
	{
		x = 0;
		y = 0;
		cin >> num;
		cin >> command;
		for (int j = 0; j < num; j++)
		{
			if (command[j] == 'U')  y += 1;
			else if (command[j] == 'D') y -= 1;
			else if (command[j] == 'R') x += 1;
			else if (command[j] == 'L') x -= 1;
			else cout << "Invalid command";
			if (x == 1 && y == 1)mass[i] = true;
		}
	}
	for (int i = 0; i < mainnum; i++)
	{
		if (mass[i]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}