/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';
    double SmallShirt;
    double MediumShirt;
    double LargeShirt;
    int shirtPattyBuying;
    int smallPriceInCents;
    int subTotal;
    int taxes;
    int total;

    printf("Set Shirt Prices\n"
        "================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &SmallShirt);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &MediumShirt);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &LargeShirt);

    printf("\nShirt Store Price List\n"
        "======================\n"
        "SMALL  : $%.2lf\n"
        "MEDIUM : $%.2lf\n"
        "LARGE  : $%.2lf\n\n", SmallShirt, MediumShirt, LargeShirt);

    printf("Patty's shirt size is '%c'\n", patSize);

    printf("Number of shirts Patty is buying: ");

    scanf("\n%d", &shirtPattyBuying);
    printf("\n");
    printf("Patty's shopping cart...\n"
        "Contains : %d shirts\n", shirtPattyBuying);


    

    smallPriceInCents = (int)(SmallShirt * 100 + 0.5);
    subTotal = smallPriceInCents * shirtPattyBuying;
    taxes = (int)(subTotal * TAX + 0.5);
    total = subTotal + taxes;



    printf("Sub-total: $%8.4lf\n", (double)subTotal/100);
    printf("Taxes    : $%8.4lf\n", (double)taxes/100);
    printf("Total    : $%8.4lf\n", (double)total/100);





    


    return 0;
}