#include <iostream>

void printPositions(int);

const int winPos = 10;
const int horsesAmount = 5;

main() {
    int horses[] {0, 0, 0, 0, 0};
    printPositions(horses);
    
    return 0;
}

void printPositons(int positionNums[]) {
    for (int i = 0; i < horsesAmount; i++) {
        int arr[winPos] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
        arr[positionNums[i]] = i;
        for (int ii = 0; ii < winPos; ii++) {
            std::out << arr[ii];
        }
        std::out << std::endl;
    }
}
