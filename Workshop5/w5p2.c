/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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

#define MAX_YEAR 2022
#define MIN_YEAR 2012
#define LOG_DAYS 3
int main(void)
{
    const int JAN = 1, DEC = 12;
    int year, month;
    int day = 1;
    int check = 0;
    double mornRate = -1.0, mornTot = 0, evenRate = -1.0, evenTot = 0;
    double avgEvenRate, avgMornRate, overallRate;


    printf("General Well-being Log\n"
        "======================\n");
    do
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        if (MAX_YEAR < year || MIN_YEAR > year)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            check = 1;
        }
        if (month < JAN || month>DEC)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
            check = 1;
        }
        if ((MAX_YEAR >= year && MIN_YEAR <= year) && (month >= JAN && month <= DEC))
        {
            printf("\n*** Log date set! ***\n");
            check = 0;
        }




    } while (check != 0);



    for (day = 1; day <= LOG_DAYS && (LOG_DAYS >= 3 || LOG_DAYS <= 28); day++)
    {
        printf("\n");
        switch (month) {
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

        do
        {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &mornRate);

            if (mornRate < 0.0 || mornRate > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                mornRate = -1.0;
            }
        } while (mornRate < 0.0 || mornRate > 5.0);
        mornTot = (mornTot + mornRate);

        do
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &evenRate);

            if (evenRate < 0.0 || evenRate > 5.0)
            {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                evenRate = -1.0;
            }
        } while (evenRate < 0.0 || evenRate > 5.0);
        evenTot = (evenRate + evenTot);

    }
    printf("\n");
    printf("Summary\n");
    printf("=======\n");

    printf("Morning total rating: %.3lf\n", mornTot);
    printf("Evening total rating:  %.3lf\n", evenTot);
    printf("----------------------------\n");
    overallRate = mornTot + evenTot;
    printf("Overall total rating: %.3lf\n\n", overallRate);
    avgMornRate = mornTot / LOG_DAYS;
    avgEvenRate = evenTot / LOG_DAYS;
    printf("Average morning rating:  %.1lf\n", avgMornRate);
    printf("Average evening rating:  %.1lf\n", avgEvenRate);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n\n", ((mornTot / LOG_DAYS) + (evenTot / LOG_DAYS)) / 2) ;


    return 0;
}