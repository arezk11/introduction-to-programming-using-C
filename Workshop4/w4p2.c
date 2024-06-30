/*
*****************************************************************************
                          Workshop - #4 (P2)
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
	int numApples = -1, numOranges = -1, numPears = -1, numTomatos = -1, numCabages = -1;
	int numApplesPicked = -1, numOrangesPicked = -1, numPearsPicked = -1, numTomatosPicked = -1, numCabagesPicked = -1;;
	int shopAgain =1 ;
	
	do
	{
	    

		printf("Grocery Shopping\n"
			"================\n");
		do
		{
			printf("How many APPLES do you need? : ");
			scanf("%d", &numApples);
			if (numApples < 0)
			{
				printf("ERROR: Value must be 0 or more.\n");

			}

		}while (numApples < 0);
		printf("\n");

		do
		{
			printf("How many ORANGES do you need? : ");
			scanf("%d", &numOranges);
			if (numOranges < 0)
			{
				printf("ERROR: Value must be 0 or more.\n");

			}

		}while (numOranges < 0);
		printf("\n");

		do
		{
			printf("How many PEARS do you need? : ");
			scanf("%d", &numPears);
			if (numPears < 0)
			{
				printf("ERROR: Value must be 0 or more.\n");

			}

		}while (numPears < 0);
		printf("\n");

		do
		{
			printf("How many TOMATOES do you need? : ");
			scanf("%d", &numTomatos);
			if (numTomatos < 0)
			{
				printf("ERROR: Value must be 0 or more.\n");

			}

		} while (numTomatos < 0);
		printf("\n");


		do
		{
			printf("How many CABBAGES do you need? : ");
			scanf("%d", &numCabages);
			if (numCabages < 0)
			{
				printf("ERROR: Value must be 0 or more.\n");

			}

		}while (numCabages < 0);
		printf("\n");
		printf("--------------------------\n"
			"Time to pick the products!\n"
			"--------------------------\n\n");

		while (numApples > 0)
		{

			printf("Pick some APPLES... how many did you pick? : ");
			scanf("%d", &numApplesPicked);
			if (numApplesPicked > numApples)
			{

				printf("You picked too many... only %d more APPLE(S) are needed.\n", numApples);

			}
			else if (numApplesPicked <= 0)
			{
				
				printf("ERROR: You must pick at least 1!\n");
			}
			else if (numApplesPicked > 0 && numApplesPicked < numApples)
			{
				numApples = numApples - numApplesPicked;
				printf("Looks like we still need some APPLES...\n");
			}
			else if (numApplesPicked == numApples)
			{
				numApples = numApples - numApplesPicked;
				printf("Great, that's the apples done!\n\n");
			}
			
			


		}
		while (  numOranges > 0 )
		{

			printf("Pick some ORANGES... how many did you pick? : ");
			scanf("%d", &numOrangesPicked);
			if (numOrangesPicked > numOranges)
			{
				printf("You picked too many... only %d more ORANGE(S) are needed.\n", numOranges);

			}
			else if (numOrangesPicked <= 0)
			{
				
				printf("ERROR: You must pick at least 1!\n");
			}
			else if (numOrangesPicked > 0 && numOrangesPicked < numOranges)
			{
				numOranges = numOranges-numOrangesPicked;
				printf("Looks like we still need some ORANGES...\n");
			}
			else if (numOrangesPicked == numOranges)
			{
				numOranges =numOranges- numOrangesPicked;
				printf("Great, that's the oranges done!\n\n");


			}
		}
		while ( numPears > 0)
		{

			printf("Pick some PEARS... how many did you pick? : ");
			scanf("%d", &numPearsPicked);
			if (numPearsPicked > numPears)
			{
				printf("You picked too many... only %d more PEAR(S) are needed.\n", numPears);

			}
			else if (numPearsPicked <= 0)
			{
				
				printf("ERROR: You must pick at least 1!\n");
			}
			else if (numPearsPicked > 0 && numPearsPicked < numPears)
			{
				numPears = numPears-numPearsPicked;
				printf("Looks like we still need some PEARS...\n");
			}
			else if (numPearsPicked == numPears)
			{
				printf("Great, that's the pears done!\n\n");
				numPears =numPears- numPearsPicked;

			}
		}
		while (numTomatos > 0)
		{

			printf("Pick some TOMATOES... how many did you pick? : ");
			scanf("%d", &numTomatosPicked);
			if (numTomatosPicked > numTomatos)
			{
				printf("You picked too many... only %d more TOMATO(ES) are needed.\n", numTomatos);

			}
			else if (numTomatosPicked <= 0)
			{
				
				printf("ERROR: You must pick at least 1!\n");
			}
			else if (numTomatosPicked > 0 && numTomatosPicked < numTomatos)
			{
				numTomatos =numTomatos- numTomatosPicked;
				printf("Looks like we still need some TOMATOES...\n");
			}
			else if (numTomatosPicked == numTomatos)
			{
				numTomatos = numTomatos - numTomatosPicked;
				printf("Great, that's the tomatoes done!\n\n");


			}
		}
		while (numCabages > 0)
		{

			printf("Pick some CABBAGES... how many did you pick? : ");
			scanf("%d", &numCabagesPicked);
			if (numCabagesPicked > numCabages)
			{
				printf("You picked too many... only %d more CABBAGE(S) are needed.\n", numCabages);

			}
			else if (numCabagesPicked <= 0)
			{
				
				printf("ERROR: You must pick at least 1!\n");
			}
			else if (numCabagesPicked > 0 && numCabagesPicked < numCabages)
			{
				numCabages =numCabages- numCabagesPicked;
				printf("Looks like we still need some CABBAGES...\n");
			}
			else if (numCabagesPicked == numCabages)
			{
				numCabages = numCabages - numCabagesPicked;
				printf("Great, that's the cabbages done!\n\n");


			}
		}
		





        
		
	


     printf("All the items are picked!\n\n");
	 printf("Do another shopping? (0=NO): ");
		scanf("%d", &shopAgain);
		printf("\n");
      if (shopAgain == 0)
	  {
		  
		printf("Your tasks are done for today - enjoy your free time!");
		printf("\n");
	  }
	}while (shopAgain == 1);
	









	return 0;
}    