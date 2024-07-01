/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
Full Name  :Ali Mohamed Ali Ahmed Rezk
Student ID#:105593222
Email      :arezk1@myseneca.ca
Section    :ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "core.h"
#include <string.h>
//
// Copy your work done from Milestone #1 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
// - Also copy the commented "sections" to help with finding functions quickly!
//


// Clear the standard input buffer
void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue 
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

int inputInt(void)
{
    char character = ' ';
    int value;


    do
    {
        scanf("%d%c", &value, &character);

        if (character != '\n')
        {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }
    } while (character != '\n');

    return value;
}

int inputIntPositive(void)
{

    int value;
    do {
        value = inputInt();

        if (value <= 0)
        {
            printf("ERROR! Value must be > 0: ");
        }

    } while (value <= 0);


    return value;
}

int inputIntRange(int lowerBound, int upperBound)
{

    int value;

    do
    {
        value = inputInt();
        if (!(value <= upperBound && value >= lowerBound))
        {
            printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
        }


    } while (!(value <= upperBound && value >= lowerBound));

    return value;
}

char inputCharOption(const char str[])
{
    int i;
    int counter = 0;
    char input;

    do
    {
        scanf(" %c", &input);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (input == str[i]) {
                counter++;
            }
        }


        if (counter == 0)
        {
            printf("ERROR: Character must be one of [%s]: ", str);
        }


    } while (counter == 0);

    clearInputBuffer();

    return input;
}



void inputCString(char* str, int minChar, int maxChar)
{
    int check = 1;
    char charct = 'x';

    while (check)
    {
        int len = 0;
    
        while (charct != '\n' && len <= maxChar)
        {
            charct = getchar();
            str[len] = charct;
            len++;
        };


        if (charct == '\n' && len <= (maxChar + 1)) 
        {
            len--;
            str[len] = '\0';
        }

        else
        {
            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) 
        {
            printf("ERROR: String length must be exactly %d chars: ", minChar);
            charct = 'x';
        }
        else if (len < minChar || len > maxChar) 
        {
            if (len > maxChar) 
            {
                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                charct = 'x';
            }
            else if (len < minChar) 
            {
                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                charct = 'x';
            }
        }
        else
        {
            check = 0;
        }
    }
}

void displayFormattedPhone(const char* str)
{
    int len = 0;
    int i;

    while (str != NULL && str[len] && (str[len] >= '0' && str[len] <= '9'))
    {
        len++;
    }

    if (len == 10)
    {
        i = 0;
        printf("(");
        while (i < 3)
        {
            printf("%c", str[i]);
            i++;
        }
        printf(")");
        while (i < 6)
        {
            printf("%c", str[i]);
            i++;
        }
        printf("-");
        while (i < 10)
        {
            printf("%c", str[i]);
            i++;
        }
    }
    else
    {
        printf("(___)___-____");
    }
    if (str != 0)
    {
        for (i = 0; str[i] != '\0'; i++)
            len++;
    }
}












