#include <iostream>

void printPositions(int positionNums[]);

const int winPos = 9;
const int horsesAmount = 5;

int main() {
    int horses[] = {0, 0, 0, 0, 0};
    printPositions(horses);
    
    return 0;
}

void printPositions(int positionNums[]) {
    for (int i = 0; i < horsesAmount; i++) {
        char arr[winPos+1] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
        arr[positionNums[i]] = i + '0';
        for (int ii = 0; ii < winPos+1; ii++) {
            std::cout << arr[ii];
        }
        std::cout << std::endl;
    }
}
