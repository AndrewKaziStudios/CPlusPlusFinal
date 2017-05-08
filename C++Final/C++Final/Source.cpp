// Quiz Game. "GUESS THE ____!"
// Andrew McKenzie, Dipesh Thapa

#include <iostream>
#include <string>



int main() {
	
	std::string Yes_No, difficulty;

	for (int column = 0; column < 80; ++column)
	{
		std::cout << "*";
	}

	std::cout << "               Welcome TO:  " << std::endl;
	std::cout << "                           GUESS" << std::endl;
	std::cout << "                                 THE " << std::endl;
	std::cout << "                                    _______!" << std::endl;

	std::cout << "                     To Play Type            " << std::endl;
	std::cout << "                         Yes                  " << std::endl;
	std::cout << "                         No                     " << std::endl;
	std::cin >> Yes_No;
	
	

	// now print a carraige return, so we can start printing on the next line

	for (int row = 0; row < 8; ++row)
	{
		// print the left "wall"
		std::cout << "*";
		// now print 78 spaces
		for (int column = 0; column < 78; ++column)
		{
			std::cout << " ";
		}
		// finally print the right "wall" and a carraige return
		std::cout << "*\n";
		// continue the for loop to print the next row
	}

	// Once the loop is done, we can print the bottom wall the same way we printed the top one.
	for (int column = 0; column < 80; ++column)
	{
		std::cout << "*";
	}

	if (Yes_No == "Yes")
	{
		std::cout << "Thank you for playing." << std::endl;
		std::cout << "Please chose a difficulty: Easy, Medium, Hard." << std::endl;
		std::cin >> difficulty;

		if (difficulty == "Easy" || "easy")
		{

		}
		else if (difficulty == "Medium" || "medium")
		{

		}
		else if (difficulty == "Hard" || "hard")
		{

		}
	}




	// now print a carraige return, so we can start printing on the next line
	std::cout << " \n";







	system("pause");
	return 0;
}
