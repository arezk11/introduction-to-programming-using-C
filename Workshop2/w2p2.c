/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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
    //Patty Variables
    const char patSize = 'S';
    int patTotal;
    int patSubTotal;
    int smPriceCent;
    double smallShirt;
    int shirtPattyBuying;
    int patTaxes;
    //sally Variables
    const char salSize = 'M';
    int salTotal;
    int salSubTotal;
    int mdPriceCent;
    double mediumShirt;
    int shirtSallyBuying;
    int salTaxes;
    //Tommy Variables
    const char tomSize = 'L';
    int tomTotal;
    int tomSubTotal;
    int lrPriceCent;
    double largeShirt;
    int shirtTomBuying;
    int tomTaxes;
    //Sum Variables
    int subTotalSum;
    int totalSum;
    int taxesSum;
    //Coins Variables
    int toonies, loonies, quarters, dimes, nickel, penny;
    int rmToonies, rmLoonies, rmQuarters, rmDimes, rmNickels, rmPennies;
    //Average Variables
    int buyingSum;
    double  avWithoutTaxes, avWithTaxes;

    printf("Set Shirt Prices\n"
        "================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirt);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirt);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirt);

    printf("\nShirt Store Price List\n"
        "======================\n"
        "SMALL  : $%.2lf\n"
        "MEDIUM : $%.2lf\n"
        "LARGE  : $%.2lf\n\n", smallShirt, mediumShirt, largeShirt);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("\n%d", &shirtPattyBuying);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("\n%d", &shirtTomBuying);


    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("\n%d", &shirtSallyBuying);

    smPriceCent = (int)(smallShirt * 100 + 0.5);
    patSubTotal = smPriceCent * shirtPattyBuying;
    patTaxes = (int)(patSubTotal * TAX + 0.5);
    patTotal = patSubTotal + patTaxes;
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n"
        "-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
        patSize, smallShirt, shirtPattyBuying, (double)patSubTotal / 100, (double)patTaxes / 100, (double)patTotal / 100);
    //patty Done
    mdPriceCent = (int)(mediumShirt * 100 + 0.5);
    salSubTotal = mdPriceCent * shirtSallyBuying;
    salTaxes = (int)(salSubTotal * TAX + 0.5);
    salTotal = salSubTotal + salTaxes;
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
        salSize, mediumShirt, shirtSallyBuying, (double)salSubTotal / 100, (double)salTaxes / 100, (double)salTotal / 100);
    //sally Done
    lrPriceCent = (int)(largeShirt * 100 + 0.5);
    tomSubTotal = lrPriceCent * shirtTomBuying;
    tomTaxes = (int)(tomSubTotal * TAX + 0.5);
    tomTotal = tomSubTotal + tomTaxes;
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
        tomSize, largeShirt, shirtTomBuying, (double)tomSubTotal / 100, (double)tomTaxes / 100, (double)tomTotal / 100);
    //Tommy Done
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    subTotalSum = patSubTotal + salSubTotal + tomSubTotal;
    //sum of subtotal done
    taxesSum = (int)(subTotalSum * TAX + 0.5);
    //sum of taxes done
    totalSum = subTotalSum + taxesSum;
    //sum of total done
    printf("%33.4lf %9.4lf %9.4lf\n", (double)subTotalSum / 100, (double)taxesSum / 100, (double)totalSum / 100);
    printf("\nDaily retail sales represented by coins"
        "\n=======================================\n");

    printf("\nSales EXCLUDING tax"
        "\nCoin     Qty   Balance"
        "\n-------- --- ---------\n");
    printf("%22.4lf\n", (double)subTotalSum / 100);
    //Coins Cal:
    toonies = (subTotalSum / 2);
    rmToonies = (subTotalSum % 200);
    printf("Toonies  %3d %9.4lf\n", (int)toonies / 100, (double)rmToonies / 100);
    //Toonies Done
    loonies = (rmToonies / 1);
    rmLoonies = rmToonies % 100;
    printf("Loonies  %3d %9.4lf\n", (int)loonies / 100, (double)rmLoonies / 100);
    //Loonies Done
    quarters = (rmLoonies / 0.25);
    rmQuarters = rmLoonies % 25;
    printf("Quarters %3d %9.4lf\n", (int)quarters / 100, (double)rmQuarters / 100);
    //Quarters Done
    dimes = (rmQuarters / 0.10);
    rmDimes = rmQuarters % 10;
    printf("Dimes    %3d %9.4lf\n", (int)dimes / 100, (double)rmDimes / 100);
    //Dimes Done
    nickel = rmDimes / 0.05;
    rmNickels = rmDimes % 5;
    printf("Nickels  %3d %9.4lf\n", (int)nickel / 100, (double)rmNickels / 100);
    //Nickels Done
    penny = rmNickels / 0.01;
    rmPennies = rmNickels % 1;
    printf("Pennies  %3d %9.4lf\n\n", (int)penny / 100, (double)rmPennies / 100);
    //Pennies Done,Coins Cal Done
    buyingSum = shirtPattyBuying + shirtSallyBuying + shirtTomBuying;
    avWithoutTaxes = (double)subTotalSum / (double)buyingSum;
    printf("Average cost/shirt: $%5.4lf\n\n", (double)avWithoutTaxes / 100);
    //Average Done
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)totalSum / 100);
    toonies = (totalSum / 2);
    rmToonies = (totalSum % 200);
    printf("Toonies  %3d %9.4lf\n", (int)toonies / 100, (double)rmToonies / 100);
    //Toonies Done
    loonies = (rmToonies / 1);
    rmLoonies = rmToonies % 100;
    printf("Loonies  %3d %9.4lf\n", (int)loonies / 100, (double)rmLoonies / 100);
    //Loonies Done
    quarters = (rmLoonies / 0.25);
    rmQuarters = rmLoonies % 25;
    printf("Quarters %3d %9.4lf\n", (int)quarters / 100, (double)rmQuarters / 100);
    //Quarters Done
    dimes = (rmQuarters / 0.10);
    rmDimes = rmQuarters % 10;
    printf("Dimes    %3d %9.4lf\n", (int)dimes / 100, (double)rmDimes / 100);
    //Dimes Done
    nickel = rmDimes / 0.05;
    rmNickels = rmDimes % 5;
    printf("Nickels  %3d %9.4lf\n", (int)nickel / 100, (double)rmNickels / 100);
    //Nickels Done
    penny = rmNickels / 0.01;
    rmPennies = rmNickels % 1;
    printf("Pennies  %3d %9.4lf\n\n", (int)penny / 100, (double)rmPennies / 100);
    //Pennies Done
    avWithTaxes = (double)totalSum / (double)buyingSum;
    printf("Average cost/shirt: $%5.4lf\n\n", (double)avWithTaxes / 100);




 
    return 0;
}