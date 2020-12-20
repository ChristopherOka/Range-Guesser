#include <iostream>

void range_guesser() {
	bool continue_loop = true;
	int input; 
	while (continue_loop) { 
		std::cout << "Enter an input number\n";
		std::cin >> input; 
		if (input >= 1 && input <= 10) {//checks if the input value is between 1 and 10
			continue_loop = false; //sets continue_loop to false if the number is between 1 and 10
			std::cout << "Nice, you found the correct range!\n";
		}

	}
}

int main() {
	range_guesser(); 
}
