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


printPositions(int passedArray) function
    for numOfHorses
        int array = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
        array[passedArray[i]] = i
        print array



changePositions(int passedArray) function
    for numOfHorses
        if checkForWinner is -1
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> distr(0, 1);
            int randomNum = distr(gen);
            (i had to lookup how to get a random number in c++ so i put the actual code here so i could look back and remember how to do it later)
    
            if randomNum is 1
                passedArray[i] += 1



int checkForWinner(int passedArray)
    bool winner = -1
    for numOfHorse
        if passedArray[i] is 14, winner = i
    return winner
```
