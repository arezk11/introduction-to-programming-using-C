/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  : Ali Mohamed Ali Ahmed Rezk
Student ID#: 105593222
Email      : arezk1@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{

	int loopNum, number;
	char letter;

	printf("+----------------------+\n");
	printf("Loop application STARTED\n");
	printf("+----------------------+\n\n");
	do {

		printf("D = do/while | W = while | F = for | Q = quit\n");
		printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
		scanf(" %c%d", &letter, &loopNum);
		switch (letter)
		{
		case 'D':

			if (loopNum >= 3 && loopNum <= 20)
			{
				number = 0;
				printf("DO-WHILE: ");
				do
				{
					printf("D");
					number++;
				} while (loopNum > number);
				printf("\n\n");
			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
				printf("\n");
			}
			break;

		case 'W':
			if (loopNum >= 3 && loopNum <= 20)
			{
				number = 0;
				printf("WHILE   : ");
				while (loopNum > number)
				{
					number++;
					printf("W");
					
				}printf("\n\n");

			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
				printf("\n");


			}
			break;

		case 'F':
			if (loopNum >= 3 && loopNum <= 20)
			{

				number = 0;
				
				printf("FOR     : ");
				for (number = 0; loopNum > number; number++)
				{
					printf("F");
					
				}printf("\n\n");

			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
				printf("\n");
			}
			break;
		case'Q':
			if (loopNum == 0)
			{
				printf("\n+--------------------+\n");
				printf("Loop application ENDED\n");
				printf("+--------------------+\n");
			}
			else
			{
				printf("ERROR: To quit, the number of iterations should be 0!\n\n");


			}
			break;

		default:
			printf("ERROR: Invalid entered value(s)!\n\n");
			break;
		}

	} while (loopNum != 0 || letter != 'Q');












	return 0;
}