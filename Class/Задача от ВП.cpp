#include <iostream>
#include <string>


using namespace std;

int main()
{
	string num;
	cin >> num;
	int size_num = num.size();
	int i = 0;
	int count = 0;
	while (i <= size_num)
	{
		if (num[i] < num[i + 1])
		{
			num.erase(i, 1);
			count++;
			if (count == 2) { cout << num; return 0; }
		}
		else i++;
	}


	
}
