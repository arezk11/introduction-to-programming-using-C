#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// You must use this variable in #3 data analysis section!
	const double testValue = 330.99;
	const int product1Id = 111;
	const char taxedProduct1 = 'Y';
	const double prod1Price = 111.4900;
	const int product2Id = 222;
	const char taxedProduct2 = 'N';
	const double prod2Price = 222.9900;
	const int product3Id = 111;
	const char taxedProduct3 = 'N';
	const double prod3Price = 334.4900;
	const double avOfAllPrices = 222.9900;
	printf("Product Information\n"
		   "===================\n");
	printf("Product-1 (ID:%d)\n", product1Id);
	printf("  Taxed: %c\n", taxedProduct1);
	printf("  Price: $%.4lf\n\n", prod1Price);

	printf("Product-2 (ID:%d)\n", product2Id);
	printf("  Taxed: %c\n", taxedProduct2);
	printf("  Price: $%.4lf\n\n", prod2Price);

	printf("Product-3 (ID:%d)\n", product3Id);
	printf("  Taxed: %c\n", taxedProduct3);
	printf("  Price: $%.4lf\n\n", prod3Price);

	printf("The average of all prices is: $%.4lf\n\n", avOfAllPrices);

	printf("About Relational and Logical Expressions!\n"
		   "========================================\n"
		"1. These expressions evaluate to TRUE or FALSE\n"
		"2. FALSE: is always represented by integer value 0\n"
		"3. TRUE : is represented by any integer value other than 0\n\n");

	printf("Some Data Analysis...\n"
		   "=====================\n");
	printf("1. Is product 1 taxable? -> %d\n\n", taxedProduct1 == 'Y');
	printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", taxedProduct2 == 'N' && taxedProduct3 == 'N');
	printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n", testValue, prod3Price < testValue);
	printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", prod3Price > prod1Price + prod2Price);
	printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d"
		" (price difference: $%.2f)\n\n"
		, prod1Price >= prod3Price - prod2Price, prod3Price - prod2Price);
	printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", prod2Price >= avOfAllPrices);
	printf("7. Based on product ID, product 1 is unique -> %d\n\n", product1Id != product2Id && product1Id != product3Id);
	printf("8. Based on product ID, product 2 is unique -> %d\n\n", product2Id != product1Id && product3Id != product2Id);
	printf("9. Based on product ID, product 3 is unique -> %d\n\n", product3Id != product1Id && product3Id != product1Id);





















	return 0;
}