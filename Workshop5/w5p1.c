/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

#define MAX_YEAR 2022
#define MIN_YEAR 2012
const int JAN = 1, DEC = 12;
int year, month;
int day = 0;//flag and a variable


int main(void)
{

	printf("General Well-being Log\n"
		"======================\n");
	do
	{
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
		if (MAX_YEAR < year || MIN_YEAR > year)
		{
			printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

		}
		if (month < JAN || month>DEC)
		{
			printf("   ERROR: Jan.(1) - Dec.(12)\n");

		}
		if ((MAX_YEAR >= year && MIN_YEAR <= year) && (month >= JAN && month <= DEC))
		{
			printf("\n*** Log date set! ***\n\n");
			day = 1;
		}




	} while (MAX_YEAR < year || MIN_YEAR >year || month<JAN || month>DEC || day == 0);

	printf("Log starting date: ");
        

	switch (month)
	{
	case 1:

		printf("%d-JAN-%02d", year, day);
		break;

	case 2:

		printf("%d-FEB-%02d", year, day);
		break;

	case 3:

		printf("%d-MAR-%02d", year, day);
		break;

	case 4:
		printf("%d-APR-%02d", year, day);
		break;
	case 5:
		printf("%d-MAY-%02d", year, day);
		break;
	case 6:
		printf("%d-JUN-%02d", year, day);
		break;
	case 7:
		printf("%d-JUL-%02d", year, day);
		break;
	case 8:
		printf("%d-AUG-%02d", year, day);
		break;
	case 9:
		printf("%d-SEP-%02d", year, day);
		break;
	case 10:
		printf("%d-OCT-%02d", year, day);
		break;
	case 11:
		printf("%d-NOV-%02d", year, day);
		break;
	case 12:
		printf("%d-DEC-%02d", year, day);
		break;
	}

        printf("\n");
	return 0;
}
