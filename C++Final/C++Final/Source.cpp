#include <iostream>
#include <string>

int main() {


	std::string Yes_No, answer;
	int tries = 5;


	std::string play;
	int right_wrong = 0;
	int wrong_right = 0;
	

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
		char difficulty = ' ';
		std::cout << " " << std::endl;
		std::cout << "Thank you for playing." << std::endl;
		std::cout << "Please chose a difficulty: Easy = E, Medium = M, Hard = H." << std::endl;
		std::cin >> difficulty;
		difficulty = toupper(difficulty);
		
		switch (difficulty)
		{

		case 'E':
			std::cout << " " << std::endl;
			std::cout << "In this level you have 5 lives to get all 5 questions correct." << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			std::cout << "#1                      Do you want to play this game?" << std::endl;
			std::cout << "A) Yes" << std::endl;
			std::cout << "B) No" << std::endl;
			std::cin >> play;
			if (play == "A")
			{
				std::cout << "Hurray! You got it right!" << std::endl;
				right_wrong++;
			}
			else if (play == "B")
			{
				std::cout << "Wrong! That is not the right answer" << std::endl;
				tries--;
				wrong_right++;
				
			}
			std::cout << " " << std::endl;
			std::cout << "You have " << tries << " lives left & " << right_wrong << "/5 questions correct" << std::endl; 
			break;


		}

	}


	else
	{
		exit(EXIT_FAILURE);
	}


	system("pause");
	return 0;
}
