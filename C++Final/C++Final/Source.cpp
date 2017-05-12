#include <iostream>
#include <string>



int tries = 5;
int right_wrong = 0;
int wrong_right = 0;




int question1() // Question 1
{
	
	std::string play;

	std::cout << " " << std::endl;
	std::cout << "                       Do you want to play this game?" << std::endl;
	std::cout << "A) Yes" << std::endl; // Correct answer
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
	std::cout << "You have " << tries << " lives left!" << std::endl;
	std::cout << " " << std::endl;
	return 0;
}

int question2() // Question 2
{

	std::string play;

	
	
	std::cout << " " << std::endl;
	std::cout << "                    With which sport is Micheal Jordan associated?" << std::endl;

	std::cout << "A) Football" << std::endl;
	std::cout << "B) Basketball" << std::endl;
	std::cout << "C) Baseball" << std::endl; 
	std::cout << "D) Golf" << std::endl;
	std::cin >> play;

	if (play == "A")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;
	}
	else if (play == "B")
	{
			std::cout << "Right! You got it right!" << std::endl;
			right_wrong++;
	}
	else if (play == "C")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;

	}
	else if (play == "D")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;
	}

	std::cout << " " << std::endl;
	std::cout << "You have " << tries << " lives left!" << std::endl;
	std::cout << " " << std::endl;
	return 0;

}

int question3() // Question 3
{
	std::string name;


	std::cout << "                     What is the world's largest island?" << std::endl;
	std::cout << " A) Madagascar" << std::endl;
	std::cout << " B) Greenland " << std::endl; // Correct answer
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
		std::cout << "Wrong answer" << std::endl;
		tries--;
		wrong_right++;
	}
	else if (name == "A")
	{
		std::cout << "Wrong answer" << std::endl;
		tries--;
		wrong_right++;
	}

	else if (name == "C")
	{
		std::cout << "Wrong answer" << std::endl;
		tries--;
		wrong_right++;
	}
	std::cout << " You have " << tries << " lives  left  " << std::endl;
	std::cout << " " << std::endl;
	return 0;
}

int question4() // Question 4
{
	std::string answerM2;


	std::cout << " " << std::endl;
	std::cout << "                    How many U.S states border the Gulf of Mexico?" << std::endl;
	std::cout << " A) 4" << std::endl;
	std::cout << " B) 5 " << std::endl;
	std::cout << " C) 6" << std::endl;
	std::cout << " D) 7" << std::endl;
	std::cin >> answerM2;

	if (answerM2 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM2 == "B")
	{
		std::cout << " Right Answer " << std::endl;
		right_wrong++;
	}
	else if (answerM2 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}
	else if (answerM2 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}
	std::cout << " You have " << tries << " lives  left  " << std::endl;
	std::cout << " " << std::endl;
	return 0;
}


int	question5() // Question 5
{
	std::string answerM3;


	std::cout << " " << std::endl;
	std::cout << "                    What is the diameter of Earth?" << std::endl;
	std::cout << " A) 8,200 miles " << std::endl;
	std::cout << " B) 7,000 miles " << std::endl;
	std::cout << " C) 8,500 miles " << std::endl;
	std::cout << " D) 8,000 miles " << std::endl;
	std::cin >> answerM3;

	if (answerM3 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM3 == "B" )
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM3 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM3 == "D" )
	{
		std::cout << " Good Job " << std::endl;
		right_wrong++;
	}
	std::cout << " You have " << tries << " lives  left  " << std::endl;
	std::cout << " " << std::endl;
	return 0;
}
int	question6()
{

}

int	question7()
{
	std::string answerM7;


	std::cout << " " << std::endl;
	std::cout << "                    What is the capital of South Africa ?" << std::endl;
	std::cout << " A) Cape Town  " << std::endl;
	std::cout << " B) Johannesburg" << std::endl;
	std::cout << " C) East London  " << std::endl;
	std::cout << " D) Pretoria  " << std::endl;
	std::cin >> answerM7;

	if (answerM7 == "A")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM7 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM7 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM7 == "D")
	{
		std::cout << " Good Job " << std::endl;
		right_wrong++;
	}
	std::cout << " You have " << tries << " lives  left  " << std::endl;
	std::cout << " " << std::endl;
	return 0;

}

int	question8()
{
	std::string answerM8;


	std::cout << " " << std::endl;
	std::cout << "                The Linux operating system was created by which software engineer ?" << std::endl;
	std::cout << " A) Linus Torvalds  " << std::endl;
	std::cout << " B) Ken Thompson  " << std::endl;
	std::cout << " C) Dennis Ritchie" << std::endl;
	std::cout << " D) Steve Job" << std::endl;
	std::cin >> answerM8;

	if (answerM8 == "A")
	{

		std::cout << " Good Job " << std::endl;
		right_wrong++;  

	;
	}

	else if (answerM8 == "B")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM8 == "C")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}

	else if (answerM8 == "D")
	{
		std::cout << "Wrong Answer " << std::endl;
		tries--;
		wrong_right++;
	}
	std::cout << " You have " << tries << " lives  left  " << std::endl;
	std::cout << " " << std::endl;
	return 0;
}

int	question9()
{

}

int	question10(){

}

int	question11() //Dipesh 
{

}

int	question12()
{

}
int	question13()
{

}

int	question14()
{

}

int	question15()
{

}

int	question16()
{

}

int	question17()
{

}

int	question18()
{

}

int	question19()
{

}

int	question20()
{

}

int main() {


	std::string Yes_No, answer, name, answerM2, answerM3;
	
	std::string play;
	int EASYRANDOM = 8;
	int MEDIUMRANDOM = 10;
	int HARDRANDOM = 15;
	

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
			std::cout << "In this level you have 15 lives to get all 8 question right." << std::endl;
			std::cout << "       " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			
			//question1();
			//question2();

			for (size_t i = 0; i < EASYRANDOM; ++i)
			{
				switch (rand() % 5)
				{
				case 0: question1(); break; 
				case 1: question2(); break;
				case 2: question3(); break;
				case 3: question4(); break;
				case 4: question5(); break;
				}
			}
			
			break;

			
		case 'M':
			
			
			std::cout << " " << std::endl;
			std::cout << "In this level you have 10 lives to get all 10 question right." << std::endl;
			std::cout << "       " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			for (size_t i = 0; i < MEDIUMRANDOM; ++i)
			{
				switch (rand() % 5)
				{
				case 0:question1(); break; 
				case 1:question2(); break;
				case 2:question3(); break;
				case 3:question4(); break;
				case 4:question5(); break;
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

			for (size_t i = 0; i < HARDRANDOM; ++i)
			{
				switch (rand() % 5)
				{
				case 0:question1(); break;
				case 1:question2(); break;
				case 2:question3(); break;
				case 3:question4(); break;
				case 4:question5(); break;
				}
			}



		}


	}


	else
	{
		exit(EXIT_FAILURE);
	}


	system("pause");
	return 0;
}


