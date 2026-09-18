#include <iostream>
#include <random>

void printPositions(int positionNums[]);
void movePositions(int positionNums[]);
int checkForWinner(int positionNums[]);

const int winPos = 14;
const int horsesAmount = 5;

int main() {
    int horses[] = {0, 0, 0, 0, 0};
    printPositions(horses);
    
    bool keepGoing = true;
    while (keepGoing) {
        std::cout << "Press enter to continue" << std::endl;
        std::cin.get();
        
        movePositions(horses);
        
        printPositions(horses);
        
        if (checkForWinner(horses) != -1) {
            keepGoing = false;
            std::cout << "The winning horse is number " << checkForWinner(horses) << "!" << std::endl;
        }
    }
    
    return 0;
}

void printPositions(int positionNums[]) {
    for (int i = 0; i < horsesAmount; i++) {
        char arr[winPos+1] = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
        arr[positionNums[i]] = i + '0';
        for (int ii = 0; ii < winPos+1; ii++) {
            std::cout << arr[ii];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void movePositions(int positionNums[]) {
    for (int i = 0; i < horsesAmount; i++) {
        if (checkForWinner(positionNums) == -1) {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> distr(0, 1);
            int randomNum = distr(gen);
            
            if (randomNum == 1 ) {
                positionNums[i] += 1;
            }
        }
    }
}

int checkForWinner(int positionNums[]) {
    int winner = -1;
    
    for (int i = 0; i < horsesAmount; i++) {
        if (positionNums[i] == 14) {
            winner = i;
        }
    }
    
    return winner;
}
