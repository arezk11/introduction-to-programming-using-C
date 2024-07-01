/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Ali Mohamed Ali Ahmed Rezk
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


// User-Defined Libraries
#include "w8p2.h"

// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intPositive)
{
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
double getDoublePositive(double* doublePositive)
{
	double userInput;
	int check = 1;

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
	struct CatFoodInfo catFoIn;
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

void displayCatFoodData(const int skuNum, const double* prodPrice, const int calPrSer, const double* prodWeightlbs)
{
	printf("%07d %10.2lf %10.1lf %8d\n", skuNum, *prodPrice, *prodWeightlbs, calPrSer);
}

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* kgResult)
{


	double lb2Kg = (*pounds) / LB2KG;

	if (kgResult != NULL)
	{
		*kgResult = lb2Kg;
	}

	return lb2Kg;
}

// 9. convert lbs: g (call convertKG, then * 1000)

int convertLbsG(const double* pounds, int* gResult)
{

	int lb2G = ((*pounds) / LB2KG) * 1000;

	if (gResult != NULL)
	{
		*gResult = lb2G;
	}

	return lb2G;
}
// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* kgResult, int* gResult) 
{

	double lb2Kg = (*pounds) / LB2KG;
	int lb2G = ((*pounds) / LB2KG) * 1000;

	if (gResult != NULL && kgResult != NULL)
	{
		*gResult = lb2G;
		*kgResult = lb2Kg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int serSizeInGrams, const int totGrams, double* servNum)
{

	double serv = ((  double) totGrams / serSizeInGrams);

	if (servNum != NULL)
	{
		*servNum = serv;
	}

	return serv;
}


// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* servNum, double* costPerServRes)
{

	double costPerServ = (*price) / (*servNum);

	if (costPerServRes != NULL)
	{
		*costPerServRes = costPerServ;
	}

	return costPerServ;
}


// 13. calculate: cost per calorie

double calculateCostPerCal(const double* price, const double* totCal, double* costPerServRes)
{

	double costPerCal = (*price) / (*totCal);

	if (costPerServRes != NULL)
	{
		*costPerServRes = costPerCal;
	}

	return costPerCal;
}
// 14. Derive a reporting detail record based on the cat food product data

struct ReportData calculateReportData(struct CatFoodInfo catFooIn)
{

	struct ReportData repData;

	
	
	repData.skuNumber = catFooIn.skuNumber;
	repData.prodPrice = catFooIn.prodPrice;
	repData.prodWeightLb = catFooIn.prodWeight;
	repData.prodCalories = catFooIn.prodCalories;

	
	convertLbsKg(&(repData.prodWeightLb), &(repData.prodWeightKg));
	convertLbsG(&(repData.prodWeightLb), &(repData.prodWeightG));
	calculateServings(GRAMSNUMBERS, repData.prodWeightG, &repData.serv);
	
	double totalCalories = repData.prodCalories * repData.serv;

	calculateCostPerServing(&repData.prodPrice, &repData.serv, &repData.costPerServ);
	calculateCostPerCal(&repData.prodPrice, &totalCalories, &repData.costCalPrSer);

	return repData;
}
// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n",GRAMSNUMBERS );
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData repData, const int receivedRec)
{

	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", repData.skuNumber, repData.prodPrice, repData.prodWeightLb,repData.prodWeightKg, repData.prodWeightG, repData.prodCalories, repData.serv, repData.costPerServ, repData.costCalPrSer);
}


// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo catFooIn) 
{
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n", catFooIn.skuNumber, catFooIn.prodPrice);
	printf("\n");
	printf("Happy shopping!\n");
	printf("\n");
}


// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	    int i, cheapestProd = 0;
		struct ReportData repData[MAXPRODUCTS] = { {0} };
		struct CatFoodInfo catFooIn[MAXPRODUCTS] = { {0} };
		

		openingMessage(MAXPRODUCTS);

		for (i = 0; i < MAXPRODUCTS; i++) 
		{
			catFooIn[i] = getCatFoodInfo(i);
			repData[i] = calculateReportData(catFooIn[i]);
		}

		displayCatFoodHeader();
     	for (i = 0; i < MAXPRODUCTS; i++) 
		{
			displayCatFoodData(catFooIn[i].skuNumber, &catFooIn[i].prodPrice, catFooIn[i].prodCalories, &catFooIn[i].prodWeight);
		}

		double receivedRec = repData[0].costPerServ;
		for (i = 0; i < MAXPRODUCTS; i++)
		{
			if (repData[i].costPerServ <= receivedRec)
			{
				receivedRec = repData[i].costPerServ;
				cheapestProd = i;
			}
		}
		printf("\n");

		displayReportHeader();
		for (i = 0; i < MAXPRODUCTS; i++)
		{
			displayReportData(repData[i], cheapestProd);

			if (cheapestProd == i)
			{
				printf(" ***\n");
			}
			else
			{
				printf("\n");
			}
		}
		printf("\n");

		for (i = 0; i < MAXPRODUCTS; i++)
		{
			if (i == cheapestProd)
			{
				displayFinalAnalysis(catFooIn[i]);
			}
		}
	
}
