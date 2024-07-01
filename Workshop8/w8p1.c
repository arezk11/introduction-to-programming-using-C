/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  : Ali Mohamed Ali Ahmed Ali Rezk
Student ID#: 105593222
Email      : arezk1@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>


// User Libraries

#include "w8p1.h"
// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intPositive) {
	int userInput;
	int check = 1;

	do {
		scanf("%d", &userInput);
		if (userInput <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			check = 0;
		}
	} while (check);

	if (intPositive != NULL)
	{
		*intPositive = userInput;
	}
	return userInput;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* doublePositive) {
	double userInput;
	int check= 1;

	do {
		scanf("%lf", &userInput);
		if (userInput <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			check = 0;
		}
	} while (check);

	if (doublePositive != NULL)
	{
		*doublePositive = userInput;
	}
	return userInput;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number)
{

	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAXPRODUCTS);
	printf("NOTE: A 'serving' is %dg\n\n", GRAMSNUMBERS);
}
// 4. Get user input for the details of cat food product

	struct CatFoodInfo getCatFoodInfo(const int sequenceNum) 
	{
		struct CatFoodInfo catFoIn ;
		int check;

		printf("Cat Food Product #%d\n", sequenceNum + 1);
		printf("--------------------\n");
		check = 1;

		
		printf("SKU           : ");
		check = 1;
		do
		{
			scanf("%d", &catFoIn.skuNumber);

			if (catFoIn.skuNumber <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

			else
			{
				check = 0;
			}

		} while (check);

	
		printf("PRICE         : $");
		check = 1;
		do 
		{
			scanf("%lf", &catFoIn.prodPrice);

			if (catFoIn.prodPrice <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

			else
			{
				check = 0;
			}

		} while (check);

		
		printf("WEIGHT (LBS)  : ");
		check = 1;
		do 
		{
			scanf("%lf", &catFoIn.prodWeight);

			if (catFoIn.prodWeight <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}

			else
			{
				check = 0;
			}

		} while (check);

		
		check = 1;
		printf("CALORIES/SERV.: ");
		
		do 
		{
			scanf("%d", &catFoIn.prodCalories);

			if (catFoIn.prodCalories <= 0)
			{
				printf("ERROR: Enter a positive value: ");
			}
			else
			{
				check = 0;
			}
		} while (check);

		printf("\n");

	
		return catFoIn;

	}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData (const int skuNum, const double* prodPrice,const int calPrSer, const double* prodWeightlbs )
{
	printf("%07d %10.2lf %10.1lf %8d\n", skuNum, *prodPrice, *prodWeightlbs, calPrSer);
}


// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo catFoIn[MAXPRODUCTS] = { { 0 } };
	openingMessage(MAXPRODUCTS);

	for (i = 0; i < MAXPRODUCTS; i++)
	{
		catFoIn[i] = getCatFoodInfo(i);
	}

	displayCatFoodHeader();

	for (i = 0; i < MAXPRODUCTS; i++) 
	{
		displayCatFoodData(catFoIn[i].skuNumber,&catFoIn[i].prodPrice,catFoIn[i].prodCalories, &catFoIn[i].prodWeight);
	}

}