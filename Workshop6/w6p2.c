/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
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

#include <stdio.h>

#define MAX_ITEAMS 10
#define MIN_ITEAMS 1
int main(void)
{

    const double minMonthIn = 500.00;
    const double maxMonthIn = 400000.00;
    const double minCost = 100.00;
    int forecast = 0, i, check = 0;
    int periortySelected, selected, months, years, rmMonths;
    double sumCost = 0, netCome, periortyTotal = 0;
    char finans[MAX_ITEAMS] = { 0 };
    int periorty[MAX_ITEAMS] = { 0 };
    double iteamCost[MAX_ITEAMS] = { 0.0 };


    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");


    while (!check)
    {
        printf("\nEnter your monthly NET income: $");
        scanf("%lf", &netCome);

        if (netCome >= minMonthIn && netCome <= maxMonthIn)
        {
            check = 1;
        }
        else if (netCome < minMonthIn)
        {

            printf("ERROR: You must have a consistent monthly income of at least $500.00\n");

        }


        else if (netCome > maxMonthIn)
        {

            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");

        }



    }
    check = 0;
    printf("\n");

    while (!check)
    {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &forecast);

        if (forecast >= MIN_ITEAMS && forecast <= MAX_ITEAMS)
        {
            check = 1;
        }
        else
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }


        printf("\n");


    }
    for (i = 1; i <= forecast; i++)
    {
        printf("Item-%d Details:\n", i);


        do
        {
            printf("   Item cost: $");
            scanf("%lf", &iteamCost[i - 1]);

            if (iteamCost[i - 1] < minCost)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (iteamCost[i - 1] < minCost);


        check = 0;

        while (!check)
        {

            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &periorty[i - 1]);


            if ((periorty[i - 1] >= 1) && (periorty[i - 1] <= 3))
            {
                check = 1;

            }
            else
            {

                printf("      ERROR: Value must be between 1 and 3\n");
            }

        }
        check = 0;

        while (!check)
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finans[i - 1]);

            if ((finans[i - 1] == 'n') || (finans[i - 1] == 'y'))
            {
                check = 1;


            }
            else
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        }
        printf("\n");
        check = 0;







    }

    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < forecast; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, periorty[i], finans[i], iteamCost[i]);
        sumCost += iteamCost[i];
    }

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n", sumCost);
    printf("\n");


    do
    {
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");

        printf(" 0. Quit/Exit\n");

        printf("Selection: ");

        scanf("%d", &selected);
        printf("\n");
        if (selected == 0)
        {
            check = 1;
        }
        else if (selected == 1)
        {
            months = (sumCost * 10 + netCome * 5) / (netCome * 10);
            years = months / 12;
            rmMonths = months % 12;

            printf("====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", sumCost);
            printf("Forecast: %d years, %d months\n", years, rmMonths);


            check = 0;
            for (i = 0; i < forecast; i++)
            {
                if (finans[i] == 'y')
                {

                    check = 1;

                }
            }

            if (check == 1)
            {

                printf("NOTE: Financing options are available on some items.\n"
                    "      You can likely reduce the estimated months.\n");


            }
            printf("====================================================\n");
            printf("\n");
            check = 0;

        }
        else if (selected == 2)
        {

            months = (periortyTotal* 10 + netCome * 5) / (netCome * 10);
            years = months / 12;
            rmMonths = months % 12;

            printf("What priority do you want to filter by? [1-3]: ");
            scanf("%d", &periortySelected);
            printf("\n");
            printf("====================================================\n");
            printf("Filter:   by priority (%d)\n", periortySelected);

            check = 0;
            for (i = 0; i < forecast; i++)
            {

                if (periorty[i] == periortySelected)
                {


                    periortyTotal += iteamCost[i];


                }

            }
            printf("Amount:   $%1.2lf\n", periortyTotal);
            printf("Forecast: %d years, %d months\n", years, rmMonths);


            check = 0;

            for (i = 0; i < forecast; i++)
            {

                if (finans[i] == 'y' && periorty[i] == periortySelected)
                {



                    check = 1;


                }

            }

            if (check != 0)
            {

                printf("NOTE: Financing options are available on some items.\n"
                    "      You can likely reduce the estimated months.\n");

            }
            printf("====================================================\n");
            printf("\n");

        }
        else if (selected < 0 || selected > 2)
        {

            printf("ERROR: Invalid menu selection.\n");
            printf("\n");

        }


    } while (check == 0);
    printf("Best of luck in all your future endeavours!\n\n");


    return 0;
}