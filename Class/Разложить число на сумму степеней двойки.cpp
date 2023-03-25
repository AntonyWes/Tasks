#include <iostream>
#include <cmath>
using namespace std;


int sum_of_powers_of_two(int n)
{
	int K[1001] = {};
	int j;
	int l;
	int m;
	int index = 0;
	K[0] = 1;
	K[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		j = 0;
		index = i - 1;
		do 
		{
			K[i] += K[index];
			
			/*Удаление повторений*/
			m = j+1;
			l = index - pow(2, m);
			while (l >= 0)
			{
				K[i] -= K[l];
				m++;
				l = index - pow(2, m);
			}
			/*конец удаления повторений*/

			j++;
			index = i - pow(2, j);
		}
		while (index >= 0);
	}
	return K[n];
}


int main()
{
	int n;
	cin >> n;
	cout << sum_of_powers_of_two(n);
	return 0;
}
