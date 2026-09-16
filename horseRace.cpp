#include <iostream>

void printPositions(int);

main() {
    int horses[5] {0, 0, 0, 0, 0};

    return 0;
}

void printPositons(int positionNums[]) {
    for (int i = 0; i < sizeof(positionNums) / sizeof(positionNums[0]); i++) {
        char array[10] {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
        array[positionNums[i]] = i;
        for (int ii = 0; ii < (sizeof(array) / sizeof(array[0])); ii++) {
            std::cout << array[ii];
        }
        std::cout << std::endl;
    }
}