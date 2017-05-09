#include <iostream>
#include <string>

int main() {

	std::string Yes_No, anwser;
	int tries = 5;
	char difficulty = ' ';

	
	std::cout << "Welcome TO:  " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "           GUESS" << std::endl;
	std::cout << "            THE " << std::endl;
	std::cout << "          _______!" << std::endl;

	std::cout << " " << std::endl;
	std::cout << "To Play Type Yes! Type No to Quit!" << std::endl;
	std::cin >> Yes_No;

	if (Yes_No == "Yes")
	{
		std::cout << " " << std::endl;
		std::cout << "Thank you for playing." << std::endl;
		std::cout << "Please chose a difficulty: Easy, Medium, Hard." << std::endl;
		std::cin >> difficulty;
		difficulty = toupper(difficulty);

		switch (difficulty)
		{
			case ''

		}

	}



	else if (Yes_No == "No")
	{
		exit(EXIT_FAILURE);
	}


	system("pause");
	return 0;
}





