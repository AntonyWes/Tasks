#include <iostream>
using namespace std;

int main()

{
    int number_to_find = 7;
    int array[] = { 1, 3, 4, 6, 7, 8, 10, 13, 14, 18, 19, 21, 24, 37, 40, 45, 71 };
    int min = 0;
    int max = (sizeof(array) / sizeof(*array) - 1);
    int guess;

    while (min <= max)
    {
        guess = (int)(((max + min) / 2) + 0.5);
        if (number_to_find == array[guess])
        {
            cout << array[guess] << endl;
            break;
        } else if (array[guess] < number_to_find) {
            min = guess + 1;
        } else {
            max = guess - 1;
        }
    }

    return 0;
}
