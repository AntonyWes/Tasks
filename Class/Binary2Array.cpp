#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    std::vector<int> arr2 = {4, 5, 6, 7, 8, 6};
    int x = 4;

    int pos1 = -1;
    int pos2 = -1;

    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] == x) {
            pos1 = i;
            break;
        }
    }

    for (int i = 0; i < arr2.size(); i++) {
        if (arr2[i] == x) {
            pos2 = i;
            break;
        }
    }
    if (pos1 != -1 && (pos2 == -1 || pos1 < pos2)) {
        std::cout << "1" << std::endl;
    } else if (pos2 != -1 && (pos1 == -1 || pos2 < pos1)) {
        std::cout << "2" << std::endl;
    } else {
        std::cout << "same" << std::endl;
    }

    return 0;
}
