#include <iostream>

int main() {
	bool keepGoing = true;
	int count = 0;

	while (keepGoing) {
		if (count < 3) {
		std::cout << "enter x for next turn" << std::endl;
		
		char userInput;
		std::cin >> userInput;
		if(userInput != 'x' || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cout << "not a valid input" << std::endl;
			count--;
		}

		count++;
		} else {
			keepGoing = false;
		}
	}

	return 0;
}
