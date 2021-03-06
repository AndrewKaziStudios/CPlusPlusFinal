#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>


int EasyTries = 8; // Lives for easy
int MediumTries = 10; // Lives for medium
int HardTries = 5; // Lives for hard
int right_wrong = 0; // Keeps track of how many they get right
int wrong_right = 0; // Keeps track of how many they get wrong
char difficulty = toupper(difficulty);



int question1() // Question 1
{
	std::string play;

	std::cout << " " << std::endl;
	std::cout << "Lightning never strikes in the same place twice." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "T) True" << std::endl;
	std::cout << "F) False" << std::endl; // Correct
	std::cin >> play;
	if (play == "T")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else if (play == "F")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int question2() // Question 2
{
	std::string play;

	std::cout << " " << std::endl;
	std::cout << "With which sport is Michael Jordan associated?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "A) Football" << std::endl;
	std::cout << "B) Basketball" << std::endl; // Correct
	std::cout << "C) Baseball" << std::endl; 
	std::cout << "D) Golf" << std::endl;
	std::cin >> play;

	if (play == "A")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else if (play == "B")
	{
		std::cout << " Good Job" << std::endl;
		right_wrong++;
	}
	else if (play == "C")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;

	}
	else if (play == "D")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;

}

int question3() // Question 3
{
	std::string name;


	std::cout << "What is the world's largest island?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Madagascar" << std::endl;
	std::cout << " B) Greenland " << std::endl; // Correct
	std::cout << " C) United Kingdom" << std::endl;
	std::cout << " D) Ireland" << std::endl;
	std::cin >> name;
	if (name == "B")
	{
		std::cout << "Good Job" << std::endl;
		right_wrong++;
	}

	else if (name == "D")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else if (name == "A")
	{
		std::cout << "Wrong Answer" << std::endl;
		HardTries--;
		wrong_right++;
	}

	else if (name == "C")
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer" << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int question4() // Question 4
{
	std::string answerM2;


	std::cout << " " << std::endl;
	std::cout << "How many U.S states border the Gulf of Mexico?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) 4" << std::endl;
	std::cout << " B) 5 " << std::endl; // Correct
	std::cout << " C) 6" << std::endl;
	std::cout << " D) 7" << std::endl;
	std::cin >> answerM2;

	if (answerM2 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM2 == "B")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else if (answerM2 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else if (answerM2 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}


int	question5() // Question 5
{
	std::string answerM3;


	std::cout << " " << std::endl;
	std::cout << "What is the diameter of Earth?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) 8,200 miles " << std::endl;
	std::cout << " B) 7,000 miles " << std::endl;
	std::cout << " C) 8,500 miles " << std::endl;
	std::cout << " D) 8,000 miles " << std::endl; // Correct
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "B" )
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "D" )
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}
int	question6()
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "In the movie 'Toy Story' what is the name of the boy next door who \nblows up toys?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Bob " << std::endl;
	std::cout << " B) Luke " << std::endl;
	std::cout << " C) James " << std::endl;
	std::cout << " D) Sid " << std::endl; // Correct
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "D")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question7() // question7
{
	std::string answerM7;


	std::cout << " " << std::endl;
	std::cout << "What is the capital of South Africa?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Cape Town" << std::endl;
	std::cout << " B) Johannesburg" << std::endl;
	std::cout << " C) East London" << std::endl;
	std::cout << " D) Pretoria" << std::endl; // Correct
	std::cin >> answerM7;

	if (answerM7 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM7 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM7 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM7 == "D")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;

}

int	question8() // question8
{
	std::string answerM8;


	std::cout << " " << std::endl;
	std::cout << "The Linux operating system was created by which software engineer?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Linus Torvalds" << std::endl; // Correct
	std::cout << " B) Ken Thompson" << std::endl;
	std::cout << " C) Dennis Ritchie" << std::endl;
	std::cout << " D) Steve Job" << std::endl;
	std::cin >> answerM8;

	if (answerM8 == "A")
	{

		std::cout << " Correct  " << std::endl;
		right_wrong++;  
	}

	else if (answerM8 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM8 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM8 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question9() // question9
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "In Disney's 'Peter Pan', what flower is the\n Chiefs daughter named after?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Tiger Lily" << std::endl; // Correct
	std::cout << " B) Rose" << std::endl;
	std::cout << " C) Jasmine" << std::endl;
	std::cout << " D) Daffodil " << std::endl;
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM3 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question10() // question10
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "What two elements make up water?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Helium & Oxygen" << std::endl;
	std::cout << " B) Monoxide & Hydrogen" << std::endl;
	std::cout << " C) Hydrogen & Oxygen" << std::endl; // Correct
	std::cout << " D) Hydrogen & Nitrogen" << std::endl;
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM3 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question11() // question11
{
	std::string answerM11;
	std::cout << " " << std::endl;
	std::cout << "What is the World's smallest ocean?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Arctic Ocean  " << std::endl; ///correct 
	std::cout << " B) Atlantic Ocean " << std::endl;
	std::cout << " C) Indian Ocean" << std::endl;
	std::cout << " D) Southern Ocean " << std::endl;
	std::cin >> answerM11;

	if (answerM11 == "A")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++; 
	}

	else if (answerM11 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM11 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM11 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question12() // question12
{
	std::string answerM12;
	std::cout << " " << std::endl;
	std::cout << "A newton is a unit of what?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Enegry  " << std::endl;
	std::cout << " B) Force  " << std::endl; ///correct 
	std::cout << " C) Gravity" << std::endl;
	std::cout << " D) Mass " << std::endl;
	std::cin >> answerM12;

	if (answerM12 == "A")
	{
		std::cout << " Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM12 == "B")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM12 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM12 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;

}
int	question13() // question13
{
	std::string answerM13;
	std::cout << " " << std::endl;
	std::cout << "How fast can bees fly?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) 35 miles per hour" << std::endl;
	std::cout << " B) 10 miles per hour" << std::endl;
	std::cout << " C) 15 miles per hour" << std::endl; //correct
	std::cout << " D) 20 miles per hour " << std::endl;
	std::cin >> answerM13;

	if (answerM13 == "A")
	{
		std::cout << " Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM13 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM13 == "C")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM13 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question14() // question14
{
	std::string answerM14;
	std::cout << " " << std::endl;
	std::cout << "What is a second full moon in a month called?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Blue Moon " << std::endl; //correct
	std::cout << " B) Full Moon " << std::endl;
	std::cout << " C) Lunar Eclipse" << std::endl;
	std::cout << " D) Solar Eclipse " << std::endl;
	std::cin >> answerM14;

	if (answerM14 == "A")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM14 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM14 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM14 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question15() // question15
{
	std::string answerM15;
	std::cout << " " << std::endl;
	std::cout << "Which country has won the most World Cup?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Italy  " << std::endl;
	std::cout << " B) France" << std::endl;
	std::cout << " C) Germany" << std::endl;
	std::cout << " D) Brazil" << std::endl;  // correct 
	std::cin >> answerM15;

	if (answerM15 == "A")
	{
		std::cout << " Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM15 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM15 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM15 == "D")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question16() // question16
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "What is a wallaby?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Kangaroo" << std::endl; // Correct
	std::cout << " B) A type of drink" << std::endl;
	std::cout << " C) A piece of fruit" << std::endl; 
	std::cout << " D) There is no such thing as a wallaby" << std::endl;
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM3 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question17() // question17
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "What is the Canadian dollar coin called?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Euro" << std::endl; 
	std::cout << " B) Rupee" << std::endl;
	std::cout << " C) Yen" << std::endl;
	std::cout << " D) Loonie" << std::endl; // Correct
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM3 == "D")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question18() // question18
{
	std::string answerM3;
	std::cout << " " << std::endl;
	std::cout << "The color orange is named after the fruit." << std::endl;
	std::cout << " " << std::endl;
	std::cout << " T) True" << std::endl; // Correct
	std::cout << " F) False" << std::endl; 
	std::cin >> answerM3;

	if (answerM3 == "T")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM3 == "F")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question19() // question19
{
	std::string answerM19;
	std::cout << " " << std::endl;
	std::cout << "What are the six weapons in a standard game of Clue?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Candlestick, Lead Pipe, Knife, Poison, Sword, and a Pitchfork" << std::endl;
	std::cout << " B) Rope, Wrench, Flamethrower, Pistol, Shotgun, and a Knife" << std::endl;
	std::cout << " C) Candlestick, Lead Pipe, Knife, Revolver, Rope, and a Wrench" << std::endl; // Correct
	std::cout << " D) Axe, Pickaxe, Spear, Blowgun, Rope, and a Club" << std::endl; 
	std::cin >> answerM19;

	if (answerM19 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM19 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM19 == "C")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM19 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}

int	question20() // question20
{
	std::string answerM20;
	std::cout << "         " << std::endl;
	std::cout << "What animal guards the cave of Caerbannog in\n 'Monty Python and the Holy Grail'?" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " A) Rabbit" << std::endl; // Correct
	std::cout << " B) Snake" << std::endl;
	std::cout << " C) Dragon" << std::endl; 
	std::cout << " D) Chicken" << std::endl;
	std::cin >> answerM20;

	if (answerM20 == "A")
	{
		std::cout << " Correct  " << std::endl;
		right_wrong++;
	}

	else if (answerM20 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM20 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}

	else if (answerM20 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	else
	{
		std::cout << "Wrong Answer " << std::endl;
		EasyTries--;
		MediumTries--;
		HardTries--;
		wrong_right++;
	}
	return 0;
}
int PlayerName()  //Player Input their name to lederboard 
{
	std::string playerName;
	std::cout << "Please enter your name or initials to be put on the leader board: ";
	std::cin >> playerName;

	std::ofstream myfile("highScore.txt", std::ios_base::app | std::ios_base::out);
	if (myfile.is_open())
	{
		myfile << playerName << " " << right_wrong << " " << difficulty << "\n";
		myfile << std::endl;
		myfile.close();
	}
	else std::cout << "Unable to open file";
	return 0;

}

int main() {



	int Ecounter = 0;  //Counter function 

	srand(time(NULL)); //initialize the random seed
	char question[20] = { (int)question1, (int)question2, (int)question3, (int)question4, (int)question5, (int)question6, (int)question7, (int)question8, (int)question9, (int)question10, (int)question11, (int)question12, (int)question13, (int)question14, (int)question15, (int)question16, (int)question17, (int)question18, (int)question19, (int)question20 };


	
	int playerName;
	int EASYRANDOM = 8;
	int MEDIUMRANDOM = 10;
	int HARDRANDOM = 15;
	std::string Yes_No, answer, name, answerM2, answerM3;
	std::string play, PlayAgain, STOP;

	std::string line;
	std::cout << " **** Score Board ****" << std::endl;
	std::ifstream myfile("highScore.txt");
	
	
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			
			std::cout << line << std::endl;
		
		}
		myfile.close();
		std::cout << " ****        ****" << std::endl;
	}
	

	else std::cout << "Unable to open file";


	std::cout << " " << std::endl;
	std::cout << "Welcome To:  " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "           Lets" << std::endl;
	std::cout << "             Take a  " << std::endl;
	std::cout << "                Quiz!" << std::endl;



	std::cout << " " << std::endl;
	std::cout << "To Play Type Yes! Type No to Quit!" << std::endl;
	std::cin >> Yes_No;


	if (Yes_No == "Yes")
	{
		std::cout << " " << std::endl;
		std::cout << "Thank you for playing." << std::endl;
		std::cout << "Please chose a difficulty: Easy = E, Medium = M, Hard = H." << std::endl;
		std::cin >> difficulty;
		
		switch (difficulty)
		{

		case 'E':
				std::cout << " " << std::endl;
				std::cout << "In this level you have 8 lives to get all 8 question right." << std::endl;
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				
				
				for (size_t i = 0; i < EASYRANDOM;)
				{
					do{

						if (EasyTries > 0 && i < EASYRANDOM) 
						{
							++i;
							switch (rand() % 19)
							{
							case 0: question1(); break;  //Call all the function from 1 to 20  Random order 
							case 1: question2(); break;
							case 2: question3(); break;
							case 3: question4(); break;
							case 4: question5(); break;
							case 5: question6(); break;
							case 6: question7(); break;
							case 7: question8(); break;
							case 8: question9(); break;
							case 9: question10(); break;
							case 10: question11(); break;
							case 11: question12(); break;
							case 12: question13(); break;
							case 13: question14(); break;
							case 14: question15(); break;
							case 15: question16(); break;
							case 16: question17(); break;
							case 17: question18(); break;
							case 18: question19(); break;
							case 19: question20(); break;
							}
							std::cout << " You have " << EasyTries << " lives left!" << std::endl;
							std::cout << " " << std::endl;
						}
					} while (EasyTries >= 0 && i < EASYRANDOM);

					std::cout << "" << std::endl;
					std::cout << "You got " << right_wrong << "/8 right." << std::endl;
					std::cout << "You missed " << wrong_right << " question(s)." << std::endl;
					std::cout << "" << std::endl;
					PlayerName();
					

					std::cout << "Do you want to play again? Yes Or No?";
					std::cin >> PlayAgain;
					std::cout << " " << std::endl;

					if (PlayAgain == "Yes")
					{
						EasyTries = 8; 
						MediumTries = 10;
						HardTries = 5;
						wrong_right = 0;
						right_wrong = 0;
						main(); //Calls the main function
					}
					else
					{
						std::cout << " **** Score Board ****" << std::endl;
						std::ifstream myfile("highScore.txt");


						if (myfile.is_open())
						{
							while (getline(myfile, line))
							{

								std::cout << line << std::endl;

							}
							myfile.close();
							std::cout << " ****        ****" << std::endl;
						}
						else if (STOP == "N")
						{
							exit(EXIT_FAILURE);
						}
						
					}
				}
				break;

			
		case 'M':
			
			
			std::cout << " " << std::endl;
			std::cout << "In this level you have 10 lives to get all 10 question right." << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

				for (size_t i = 0; i < MEDIUMRANDOM;)
				{
					do{
						
						if (MediumTries > 0 && i < MEDIUMRANDOM)
						{
							++i;
							switch (rand() % 19)  //Call all the function from 1 to 20 Random order 
							{
							case 0: question1(); break;
							case 1: question2(); break;
							case 2: question3(); break;
							case 3: question4(); break;
							case 4: question5(); break;
							case 5: question6(); break;
							case 6: question7(); break;
							case 7: question8(); break;
							case 8: question9(); break;
							case 9: question10(); break;
							case 10: question11(); break;
							case 11: question12(); break;
							case 12: question13(); break;
							case 13: question14(); break;
							case 14: question15(); break;
							case 15: question16(); break;
							case 16: question17(); break;
							case 17: question18(); break;
							case 18: question19(); break;
							case 19: question20(); break;
							}
							std::cout << " You have " << MediumTries << " lives left!" << std::endl;
							std::cout << " " << std::endl;
						}
					} while (MediumTries >= 0 && i < MEDIUMRANDOM);
					std::cout << "" << std::endl;
					std::cout << "You got " << right_wrong << "/10 right." << std::endl;
					std::cout << "You missed " << wrong_right << " question(s)" << std::endl;
					std::cout << "" << std::endl;
					PlayerName();

					std::cout << "Do you want to play again? Yes Or No ";
					std::cin >> PlayAgain;
					std::cout << " " << std::endl;

					if (PlayAgain == "Yes")
					{
						EasyTries = 8;
						MediumTries = 10;
						HardTries = 5;
						wrong_right = 0;
						right_wrong = 0;
						main();
					}
					else
					{
						std::cout << " **** Score Board ****" << std::endl;
						std::ifstream myfile("highScore.txt");


						if (myfile.is_open())
						{
							while (getline(myfile, line))
							{

								std::cout << line << std::endl;

							}
							myfile.close();
							std::cout << " ****        ****" << std::endl;
						}
						else if (STOP == "N")
						{
							exit(EXIT_FAILURE);
						}

					}
				}
			break;
		
		case 'H':
			std::cout << " " << std::endl;
			std::cout << "In this level you have 5 lives to get all 15 question right." << std::endl;
			std::cout << "       " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			for (size_t i = 0; i < HARDRANDOM;)
			{
				do{

					if (HardTries >= 1 && i < HARDRANDOM)  
					{
						++i;
						switch (rand() % 19) //Call all the function from 1 to 20  Random order 
						{
						case 0: question1(); break;
						case 1: question2(); break;
						case 2: question3(); break;
						case 3: question4(); break;
						case 4: question5(); break;
						case 5: question6(); break;
						case 6: question7(); break;
						case 7: question8(); break;
						case 8: question9(); break;
						case 9: question10(); break;
						case 10: question11(); break;
						case 11: question12(); break;
						case 12: question13(); break;
						case 13: question14(); break;
						case 14: question15(); break;
						case 15: question16(); break;
						case 16: question17(); break;
						case 17: question18(); break;
						case 18: question19(); break;
						case 19: question20(); break;
						}
						std::cout << " You have " << HardTries << " lives left!" << std::endl;
						std::cout << " " << std::endl;
					}

				} while (HardTries >= 1 && i < HARDRANDOM);

				std::cout << "" << std::endl;
				std::cout << "You got " << right_wrong << "/15 right." << std::endl;
				std::cout << "You missed " << wrong_right << " question(s)" << std::endl;
				std::cout << "" << std::endl;
				PlayerName();

				std::cout << "Do you want to play again? Yes Or No  ";
				std::cin >> PlayAgain;
				std::cout << " " << std::endl;

				if (PlayAgain == "Yes")
				{
					EasyTries = 8;
					MediumTries = 10;
					HardTries = 5;
					wrong_right = 0;
					right_wrong = 0;
					main();
				}
				else
				{
					std::cout << " **** Score Board ****" << std::endl;
					std::ifstream myfile("highScore.txt");


					if (myfile.is_open())
					{
						while (getline(myfile, line))
						{

							std::cout << line << std::endl;

						}
						myfile.close();
						std::cout << " ****        ****" << std::endl;
					}
					else if (STOP == "N")
					{
						exit(EXIT_FAILURE);
					}

				}
			}
			break;
		}
	}


	else 
	{
		exit(EXIT_FAILURE);  //Exits the program
	}


	system("pause");
	return 0;
}


