#include <iostream>
#include <string>
using namespace std;

const int MAX_N = 100;
bool used[MAX_N];
char current[MAX_N];

void generatePermutations(int pos, const string& str) {
    int N = str.length();

    if (pos == N) {
        for (int i = 0; i < N; i++) {
            cout << current[i];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            used[i] = true;
            current[pos] = str[i];
            generatePermutations(pos + 1, str);
            used[i] = false;
        }
    }
}

int main() {
    string str;
    cout << "Введите строку: ";
    cin >> str;

    int N = str.length();

    for (int i = 0; i < N; i++) {
        used[i] = false;
        current[i] = 0;
    }

    generatePermutations(0, str);

    return 0;
}
