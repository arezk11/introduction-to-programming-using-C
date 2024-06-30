/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

	char cof1type;
	int  cof1weight;
	char cof1cream;

	char cof2type;
	int cof2weight;
	char cof2cream;

	char cof3type;
	int  cof3weight;
	char cof3cream;

	char cofStrength;
	int servDay;
	char cofCream;

	printf("Take a Break - Coffee Shop\n"
		"==========================\n\n");

	printf("Enter the coffee product information being sold today...\n\n");
	printf("COFFEE-1...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &cof1type);
	printf("Bag weight (g): ");
	scanf("%d", &cof1weight);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &cof1cream);

	printf("\n");
	printf("COFFEE-2...");
	printf("\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &cof2type);
	printf("Bag weight (g): ");
	scanf("%d", &cof2weight);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &cof2cream);
	printf("\n");
	printf("COFFEE-3...");
	printf("\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &cof3type);
	printf("Bag weight (g): ");
	scanf("%d", &cof3weight);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &cof3cream);
	printf("\n");

	printf("---+------------------------+---------------+-------+\n");
	printf("   |    Coffee              |   Packaged    | Best  |\n");
	printf("   |     Type               |  Bag Weight   | Served|\n");
	printf("   +------------------------+---------------+ With  |\n");
	printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
	printf("---+------------------------+---------------+-------|\n");
	printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
		cof1type == 'l' || cof1type == 'L', cof1type == 'm' || cof1type == 'M',
		cof1type == 'r' || cof1type == 'R', cof1weight, cof1weight / GRAMS_IN_LBS,
		cof1cream == 'y');
	printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
		cof2type == 'l' || cof2type == 'L', cof2type == 'm' || cof2type == 'M',
		cof2type == 'r' || cof2type == 'R', cof2weight, cof2weight / GRAMS_IN_LBS,
		cof2cream == 'y');

	printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
		cof3type == 'l' || cof3type == 'L', cof3type == 'm' || cof3type == 'M',
		cof3type == 'r' || cof3type == 'R', cof3weight, cof3weight / GRAMS_IN_LBS,
		cof3cream == 'y');
	printf("\n");
	printf("Enter how you like your coffee...\n");
	printf("\n");
	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf(" %c", &cofStrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &cofCream);
	printf("Typical number of daily servings: ");
	scanf(" %d", &servDay);
	printf("\n");
	printf("The below table shows how your preferences align to the available products:");
	printf("\n\n");
	printf("--------------------+-------------+-------+\n");
	printf("  |     Coffee      |  Packaged   | With  |\n");
	printf("ID|      Type       | Bag Weight  | Cream |\n");
	printf("--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'l' || cofStrength == 'L') && (cof1type == 'l' || cof1type == 'L'),
		(cof1weight == 250) && (servDay >= 1 && servDay <= 4),
		(cofCream == 'y' || cofCream == 'Y') && (cof1cream == 'y' || cof1cream == 'Y'));
	printf(" 2|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'l' || cofStrength == 'L') && (cof2type == 'l' || cof2type == 'L'),
		(cof2weight == 250) && (servDay >= 1 && servDay <= 4),
		(cofCream == 'y' || cofCream == 'Y') && (cof2cream == 'y' || cof2cream == 'Y'));
	printf(" 3|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'l' || cofStrength == 'L') && (cof3type == 'l' || cof3type == 'L'),
		(cof3weight == 250) && (servDay >= 1 && servDay <= 4),
		(cofCream == 'y' || cofCream == 'Y') && (cof3cream == 'y' || cof3cream == 'Y'));
	printf("\n");
	printf("Enter how you like your coffee...\n");
	printf("\n");
	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf(" %c", &cofStrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &cofCream);
	printf("Typical number of daily servings: ");
	scanf(" %d", &servDay);
	printf("\n");
	printf("The below table shows how your preferences align to the available products:\n");
	printf("\n");
	printf("--------------------+-------------+-------+\n");
	printf("  |     Coffee      |  Packaged   | With  |\n");
	printf("ID|      Type       | Bag Weight  | Cream |\n");
	printf("--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'm' || cofStrength == 'M') && (cof1type == 'm' || cof1type == 'M'),
		(cof1weight == 1000) && (servDay >= 5 || servDay <= 9),
		(cofCream == 'n' || cofCream == 'N') && (cof1cream == 'n' || cof1cream == 'N'));
	printf(" 2|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'm' || cofStrength == 'M') && (cof2type == 'm' || cof2type == 'M'),
		(cof2weight == 1000) && (servDay >= 5 || servDay <= 9),
		(cofCream == 'n' || cofCream == 'N') && (cof2cream == 'n' || cof2cream == 'N'));
	printf(" 3|       %d         |      %d      |   %d   |\n",
		(cofStrength == 'm' || cofStrength == 'M') && (cof3type == 'm' || cof3type == 'M'),
		(cof3weight == 1000) && (servDay >= 5 || servDay <= 9),
		(cofCream == 'n' || cofCream == 'N') && (cof3cream == 'n' || cof3cream == 'N'));
	printf("\n");
	printf("Hope you found a product that suits your likes!");
	printf("\n");














    return 0;
}




