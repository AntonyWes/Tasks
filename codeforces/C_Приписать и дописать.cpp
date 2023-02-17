#include <iostream>
#include <string>

using namespace std;

int main()
{
	int mainnum = 0;
	int num[100];
	int output_data[100];
	string data[100];
	int shift;
	cin >> mainnum;
	for (int i = 0; i < mainnum; i++)
	{
		cin >> num[i];
		cin >> data[i];
	}
	for (int i = 0; i < mainnum; i++)
	{
		if (num[i] == 0) output_data[i] = 0;
		else if (num[i] == 1) output_data[i] = 1;
		else
		{
			shift = 1;
			while ((num[i] >= shift * 2) &&
				((data[i][shift-1] == '0' && data[i][num[i] - shift] == '1') ||
				(data[i][shift-1] == '1' && data[i][num[i] - shift] == '0')))
			{
				shift++;
			}
			output_data[i] = num[i] - (shift - 1) * 2;
		}
	}
	for (int i = 0; i < mainnum; i++)
		{
			cout << output_data[i] << endl;
		}
}