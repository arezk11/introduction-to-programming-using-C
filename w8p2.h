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

#define MAXPRODUCTS 3
#define GRAMSNUMBERS 64
#define LB2KG 2.20462
// ----------------------------------------------------------------------------
// defines/macros


// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
    int skuNumber;
    double prodPrice;
    int prodCalories;
    double prodWeight;
};

struct ReportData
{
    int skuNumber;
    double prodPrice;
    int prodCalories;
    double prodWeightLb;
    double prodWeightKg;
    int prodWeightG;
    double serv;
    double costPerServ;
    double costCalPrSer;
};
// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int*);
// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int);



// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int);


// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int, const double*, const int, const double*);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* kgResult);


// 9. convert lbs: g
int convertLbsG(const double* pounds, int* gResult);


// 10. convert lbs: kg / g

void convertLbs(const double* pounds, double* kgResult, int* gResult);

// 11. calculate: servings based on gPerServ
double calculateServings(const int serSizeInGrams, const int totGrams, double* servNumRes);

// 12. calculate: cost per serving

double calculateCostPerServing(const double* price, const double* servNum, double* costPerServRes);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totCal, double* costPerServRes);


// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo catFooIn);


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table

void displayReportData(const struct ReportData repData, const int receivedRec);

// 17. Display the findings (cheapest)

void displayFinalAnalysis(const struct CatFoodInfo catFooIn);

// ----------------------------------------------------------------------------

// 7. Logic entry point 

void start(void);