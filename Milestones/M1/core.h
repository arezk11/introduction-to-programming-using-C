
/***************************************************************************
<assessment name example : Assignment 1 MS - 1 >
Full Name :ALi Mohamed Ali Ahmed Rezk
Student ID# :105593222
Email :arezk1@myseneca.ca
Section :ZCC
Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This
submitted
piece of work is entirely of my own creation.
**************************************************************************/


#include <stdio.h>

// Clear the standard input buffer 
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue 
void suspend(void);

//  an integer value is entered and returned. display an error message if an invalid value is entered
int inputInt(void);

//  positive integer value is entered and returned. display an error message if the value is a zero or less
int inputIntPositive(void);

//  an integer value is entered within the range (inclusive) and returned.display an error message if the value is outside the permitted range
int inputIntRange(int lowerBound, int upperBound);

// a single character value is entered within the list of valid characters and returned. display an error message if the entered character value is not in the list of valid characters
char inputCharOption(const char str[]);

// a C string value is entered containing the number of characters within the range specified by the 2nd and 3rd arguments.
void inputCString(char* str, int minChar, int maxChar);

// The purpose of this function is to display an array of 10-character digits as a formatted phone number.
void displayFormattedPhone(const char* str);