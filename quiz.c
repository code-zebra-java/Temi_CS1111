/*@Author Temi Sosanya
 * @Section # L03
 * @Date 09/29/2024
 * @Email tososany@mtu.edu
 *
 * */

//Import all necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   int main()
{
	//Create all the variable necessary for the program
	int questions;
	int count = 0;
	int num1;
	int num2;
	int randop;
	char operator;
	int answer;

	//Print a text to the user
	printf("How many questions would you like?");

	//Scan for user input
	scanf("%d",&questions);

	printf("Answer the following questions correctly:\n");

	//Start a loop to generate the amount of questions for the user
	for (int i = 0; i<questions; i++)
	{
		//seed our random number
		srand(time(0));

		//create the randomized numbers and operator
		num1 = rand()%100;
		num2 =rand()%100;
		randop = rand() % 2;

		//randomize the operators
		if (randop == 0)
		{
			operator = '-';
		}
		else
		{
			operator = '+';
		}

		//print the questions to the user
		printf("%d %c %d = ",num1,operator,num2);

		//scan for the answers 
		scanf("%d", &answer);

		//count for answers
                if(randop==0 && num1-num2==answer)
                {
                        count++;
                }
                else if(randop==1 && num1+num2==answer)
                {                                                                                                                                                                   count++;
                }
                else
                {
                        count = count+0;
                }


	}

	//Print the correct amount of answers
	printf("You got %d/%d correct.",count,questions);
	return 0;
	
}	
