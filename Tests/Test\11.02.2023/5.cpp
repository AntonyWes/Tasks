#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int g = string::npos;
	string digits = "0123456789";
	getline(cin, s);
	int ssize;
	ssize = s.size();
	for (int i = 0;i < ssize;i++)
	{
		g = digits.find(s[i]);
		if (g != string::npos)
		{
			s.insert(i + 1, "...");
			i += 3;
			ssize += 3;
		}
	}
	cout << s;
	///adasdasdasdasds 634756256832465238  eg dsfjgvsadhyic 5234657235
	///adasdasdasdasds 6...3...4...7...5...6...2...5...6...8...3...2...4...6...5...2...3...8...
	///  eg dsfjgvsadhyic 5...2...3...4...6...5...7...2...3...5...
}
