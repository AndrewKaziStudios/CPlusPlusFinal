#include <iostream>
#include <string>

int main() {


	std::string Yes_No, anwser, name;
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
		std::cout << "Please chose a difficulty: Easy = E, Medium = M, Hard = H." << std::endl;
		std::cin >> difficulty;
		difficulty = toupper(difficulty);
		
		switch (difficulty)
		{

			//case ''


				

			case 'M':
				std::cout << " " << std::endl;
				std::cout << "In this level you have 5 lives to get all 8 question right." << std::endl;
				std::cout << "       " << std::endl;
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
			                   

				std::cout << " # 1) Name the world's biggest island" << std::endl;
				std::cout << " A) Madagascar" << std::endl;
				std::cout << " B) Greenland " << std::endl;
				std::cout << " C) United Kingdom" << std::endl;
				std::cout << " D) Ireland" << std::endl;
				std::cin >> name;
				if (name == "B")
				{
					std::cout << "Good JOb" << std::endl;
				}

				else if (name == "D")
				{
					std::cout << "Wrong answer" <<  std::endl;
					tries--;
				}
				else if (name == "A")
				{
					std::cout << "Wrong answer" << std::endl;
					tries--;
				}

				else if (name == "C")
				{
					std::cout << "Wrong answer" << std::endl;
					tries--;
				}
				std::cout << " You have " << tries  << " lives  left  " << std::endl;

				std::cout << " # 2) Name the world's biggest island" << std::endl;
				break;



		}

	}


	else if (Yes_No == "No")
	{
		exit(EXIT_FAILURE);
	}


	system("pause");
	return 0;
}





