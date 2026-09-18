# CS121-Project-4-Horse-Game
### In this project we create a horse racing game where the winning horse is randomized
### The file horseRace.cpp is the actual project. turnTest.cpp was just me testing something so you can just ignore that.
### I ran out of free codespaces for the month so I've been using an online c++ code editor to make and test the code, but now there isn't an already compiled file in the repo so you might have to compile it yourself. :/

# Algorithm
### The program will have 3 functions (not including main):
- A function to print the horse positions
- A function to move forward horses
- A function to check if there is a horse in the winning spot
### There will be an array of 5 numbers, representing the positions of the horses.
### In a keep going while loop, the function to change horse positions will be called. After that, it will check if there is a winning horse. If there is, keepGoing is set to false.
## Algorithm for function to print horse positions
### The function will receive the horse position array with the parameter.
### It will then create an array of 15 * characters.
### It will grab the position of the current horse and replace that position in the char array with the horse's number.
### It then prints the array with the horse's position.
### It does this for all 5 horses.
## Algorithm for function to change horse position
### This function has a parameter to get the array of horse positions.
### First it will check if there is already a winner using the function to check for a winning horse. This makes sure there aren't multiple winners.
### Then it creates a random number of either 0 or 1.
### If the random number is 0, the horse doesn't move. If the random number is 1, the horse moves forward.
### It does this for all 5 horses.
## Algorithm for function to check for winning horses
### This function will return an int instead of void like the other two functions.
### It has a parameter to get the array of horse positions.
### It creates the return variable and sets the initial value as -1.
### Then it goes through each horse in the passed array and checks it's value. The value is 14, the return variable is set to the winning horse's number.
### After that it returns the variable

# Algorithm Pseudocode
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
