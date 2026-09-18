# CS121-Project-4-Horse-Game
### In this project we create a horse racing game where the winning horse is randomized
### I ran out of free codespaces for the month so I've been using an online c++ code editor to make and test the code, but now there isn't an already compiled file in the repo so you might have to compile it yourself. :/

# Algorithm
```
include iostream
include random

printPositons function initializer
changePositions function initializer
boolean checkForWinner function initializer

constant int for position to win
constant int for number of horses

main
    horse positions array {0, 0, 0, 0, 0}
    printPositions(horsePosArr)

    bool keepGoing true
    while keepgoing
        changePositions(horsePositions)
        if checkForWinner is not -1
            keepGoing = false
            print the winner is checkForWinner


printPositions(int passedArray) function - this will take the array of horse positions and print each of them out
    for numOfHorses
        int array = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
        array[passedArray[i]] = i
        print array



changePositions(int passedArray) function - this will get a random number for each horse, either 0 or 1, and decide if the horse should move forward
    for numOfHorses
        if checkForWinner is -1
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> distr(0, 1);
            int randomNum = distr(gen);
            (i had to lookup how to get a random number in c++ so i put the actual code here so i could look back and remember how to do it later. this code makes either a 0 or 1 which will be used to decide if the horse advances)
    
            if randomNum is 1
                passedArray[i] += 1



int checkForWinner(int passedArray) - this will go through and check if a horse is in the winning position (14). if not, it returns -1. if there is a winning horse, it returns the horse number
    bool winner = -1
    for numOfHorse
        if passedArray[i] is 14, winner = i
    return winner
```
