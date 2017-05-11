#include <iostream>
#include <string>

int question1()
{
	
	std::string play;
	int tries = 5;
	int right_wrong = 0;
	int wrong_right = 0;

	std::cout << " " << std::endl;
	std::cout << "#1                      Do you want to play this game?" << std::endl;
	std::cout << "A) Yes" << std::endl;
	std::cout << "B) No" << std::endl;
	std::cin >> play;
	if (play == "A" || "a")
	{
		std::cout << "Hurray! You got it right!" << std::endl;
		right_wrong++;

	}
	else if (play == "B" || "b")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;

	}

	std::cout << " " << std::endl;
	std::cout << "You have " << tries << " lives left!" << std::endl;
	return 0;
}

int question2()
{

	std::string play;
	int tries = 5;
	int right_wrong = 0;
	int wrong_right = 0;
	
	
	std::cout << " " << std::endl;
	std::cout << "#2                   With which sport is Micheal Jordan associated?" << std::endl;

	std::cout << "A) Baseball" << std::endl;
	std::cout << "B) Football" << std::endl;
	std::cout << "C) Basketball" << std::endl;
	std::cout << "D) Golf" << std::endl;
	std::cin >> play;

	if (play == "A" || "a")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;
	}
	else if (play == "B" || "b")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;
	}

	else if (play == "C" || "c")
	{
		std::cout << "Right! You got it right!" << std::endl;
		right_wrong++;
	}

	else if (play == "D" || "d")
	{
		std::cout << "Wrong! That is not the right answer" << std::endl;
		tries--;
		wrong_right++;
	}

	std::cout << " " << std::endl;
	std::cout << "You have " << tries << " lives left!" << std::endl;
	return 0;

}

int question3()
{
	std::string name;
	int tries = 5;
	int right_wrong = 0;
	int wrong_right = 0;

	std::cout << " # 1) Name the world's largest island" << std::endl;
	std::cout << " A) Madagascar" << std::endl;
	std::cout << " B) Greenland " << std::endl;
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
	return 0;
}

int question4()
{
	std::string name;
	int tries = 5;
	int right_wrong = 0;
	int wrong_right = 0;

}


int	question5()
{

}
int main() {


	std::string Yes_No, answer, name, answerM2, answerM3;
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

	if (Yes_No == "Yes" || "yes")
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
			
			question1();
			question2();
			/*std::cout << " " << std::endl;
			std::cout << "#2                   With which sport is Micheal Jordan associated?" << std::endl;
			std::cout << "A) Baseball" << std::endl;
			std::cout << "B) Football" << std::endl;
			std::cout << "C) Basketball" << std::endl;
			std::cout << "D) Golf" << std::endl;
			std::cin >> play;
			if (play == "A" || "a")
			{
				std::cout << "Wrong! That is not the right answer" << std::endl;
				tries--;
				wrong_right++;
			}
			else if (play == "B" || "b")
			{
				std::cout << "Wrong! That is not the right answer" << std::endl;
				tries--;
				wrong_right++;
			}
			else if (play == "C" || "c")
			{
				std::cout << "Hurray! You got it right!" << std::endl;
				right_wrong++;
			}
			else if (play == "D" || "d")
			{
				std::cout << "Wrong! That is not the right answer" << std::endl;
				tries--;
				wrong_right++;
			}

			std::cout << " " << std::endl;
			std::cout << "You have " << tries << " lives left!" << std::endl;*/
			//Question 

			break;

			
		case 'M':
			

			std::cout << " " << std::endl;
			std::cout << "In this level you have 5 lives to get all 8 question right." << std::endl;
			std::cout << "       " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;
			std::cout << " " << std::endl;

			question3();
	

			std::cout << " " << std::endl;
			std::cout << " # 2) How many U.S states border the Gulf of Mexico " << std::endl;
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
			std::cout << " #3 What is the diameter of Earth" << std::endl;
			std::cout << " A) 8,200 miles " << std::endl;
			std::cout << " B) 7,000 miles " << std::endl; 
			std::cout << " C) 8,500 miles " << std::endl;
			std::cout << " D) 8,000 miles " << std::endl;
			std::cin >> answerM3;

			if (answerM3 == "A" || "a")
			{
				std::cout << "Wrong Answer " << std::endl;
				tries--;
				wrong_right++;
			}

			if (answerM3 == "B" || "b")
			{
				std::cout << "Wrong Answer " << std::endl;
				tries--;
				wrong_right++;
			}

			if (answerM3 == "C" || "c")
			{
				std::cout << "Wrong Answer " << std::endl;
				tries--;
				wrong_right++;
			}

			if (answerM3 == "D" || "d")
			{
				std::cout << " Good Job " << std::endl;
				right_wrong++;
			}
			std::cout << " You have " << tries << " lives  left  " << std::endl;

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


