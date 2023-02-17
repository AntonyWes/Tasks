#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int i = s.find('-');

	s.insert(i, " ");

	cout << s;
}
