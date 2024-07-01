/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
Full Name  : Ali Mohamedd Ali Ahmed Rezk
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
#define MAXLIVES 10
#define MINLIVES 1
#define MAXLENGTH 70
#define MINLENGTH 10
#define MULTP 5

struct PlayerInfo
{
    int lives;
    char charct;
    int treasureNum;
    int hisPosition[MAXLENGTH];

};


struct  GameInfo
{
    int moves;
    int length;
    int bomLocation[MAXLENGTH];
    int treasureLocation[MAXLENGTH];
};



int main(void)
{
    int check , gameCheck = 0, flag=1,chractChecker=0,outRange=0;
    int i=0, j, numsCounter = 1 ;
    int maxMove, minMove, nextMove = 1,digit;
    struct PlayerInfo player1 = { 0 };
    struct GameInfo game1 = { 0 };
    char symbols, both = '&',notEntered = '-', nothing = '.', treasure = '$',boms = '!';
    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n");
    printf("\n");

    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player1.charct);

    do
    {
        printf("Set the number of lives: ");
        scanf("%d", &player1.lives);
        check = 1;
        if (player1.lives < MINLIVES || player1.lives > MAXLIVES)
        {
            printf("     Must be between %d and %d!\n", MINLIVES, MAXLIVES);
            check = 0;
        }
        else
        {

            printf("Player configuration set-up is complete\n");
            printf("\n");
            check = 1;

        }

    } while (!check);

    printf("GAME Configuration\n");
    printf("------------------\n");

    do
    {
        printf("Set the path length (a multiple of %d between %d-%d): ", MULTP, MINLENGTH, MAXLENGTH);
        scanf("%d", &game1.length);
        check = 1;

        if (game1.length < MINLENGTH)
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTP, MINLENGTH, MAXLENGTH);
            check = 0;
        }
        else if (game1.length > MAXLENGTH)
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTP, MINLENGTH, MAXLENGTH);
            check = 0;
        }
        else if (game1.length % MULTP != 0)
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTP, MINLENGTH, MAXLENGTH);
            check = 0;
        }

    } while (!check);

    do
    {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game1.moves);
        check = 1;
        minMove = player1.lives;
        maxMove = game1.length * 0.75;
        if (game1.moves < minMove || game1.moves > maxMove)
        {

            printf("    Value must be between %d and %d\n", minMove, maxMove);
            check = 0;
        }
    } while (!check);
    printf("\n");

    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n", MULTP);
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game1.length);

    for (i = 0; i < game1.length; i += MULTP)
    {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTP);
        scanf("%d %d %d %d %d", &game1.bomLocation[i], &game1.bomLocation[i + 1], &game1.bomLocation[i + 2], &game1.bomLocation[i + 3], &game1.bomLocation[i + 4]);
    }

    printf("BOMB placement set\n");
    printf("\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of %d where a value\n", MULTP);
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game1.length);

    for (j = 0; j < game1.length; j += MULTP)
    {
        printf("   Positions [%2d-%2d]: ", j + 1, j + MULTP);
        scanf("%d %d %d %d %d", &game1.treasureLocation[j], &game1.treasureLocation[j + 1], &game1.treasureLocation[j + 2], &game1.treasureLocation[j + 3], &game1.treasureLocation[j + 4]);
    }
    printf("TREASURE placement set\n");
    printf("\n");

    printf("GAME configuration set-up is complete...\n");
    printf("\n");


    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");

    printf("Player:\n");
    printf("   Symbol     : %c", player1.charct);
    printf("\n");

    printf("   Lives      : %d", player1.lives);
    printf("\n");

    printf("   Treasure   : [ready for gameplay]");
    printf("\n");

    printf("   History    : [ready for gameplay]\n");
    printf("\n");


    printf("Game:\n");
    printf("   Path Length: %d", game1.length);
    printf("\n");




    printf("   Bombs      : ");
    for (i = 0; i < game1.length; i++)
    {
        printf("%d", game1.bomLocation[i]);
    }
    printf("\n");




    printf("   Treasure   : ");
    for (j = 0; j < game1.length; j++)
    {
        printf("%d", game1.treasureLocation[j]);
    }
    printf("\n\n");


    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");
    


    while (!gameCheck)
    {
        
        
       

        if (chractChecker)
        {
            flag = 0;
            printf("  ");
            for (i = 0; (i < game1.length) && (flag == 0); i++)
            {
                if (player1.hisPosition[i] == 1 && i == nextMove - 1)
                {
                    printf("%c", player1.charct);
                    flag = 1;

                }

                else
                {
                    printf(" ");
                }
            }


        }
        printf("\n  ");
        
           
        
        for (i = 0; i < game1.length; i++) 
        {
           
            if (player1.hisPosition[i] == 0) 
            {
               
                symbols = notEntered;
                
            }
            else 
            {
                if (game1.bomLocation[i] == 1 && game1.treasureLocation[i] == 1)
                {
                    symbols = both;
                }
                else if (game1.bomLocation[i] == 1) 
                {
                    symbols = boms;
                }
                else if (game1.treasureLocation[i] == 1)
                {
                    symbols = treasure;
                }
                else
                {
                    symbols = nothing;
                }
            }

            printf("%c", symbols);
           
        }


            printf("\n ");
            numsCounter = 1;
            printf(" ");
        for (i = 0; i < game1.length; i++)
        {
            if ((i + 1) % 10 == 0) 
            {
                printf("%d", numsCounter);
                numsCounter++;
            }
            else {
                printf("|");
            }
        }


        printf("\n ");
        printf(" ");
        for (i = 1; i <= game1.length; i++) 
        {
             digit = (i % 10 == 0) ? 0 : (i % 10);
            printf("%d", digit);
        }

       
        printf("\n+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",
            player1.lives, player1.treasureNum, game1.moves);
        printf("+---------------------------------------------------+\n");

        if (player1.lives == 0 || (game1.moves == 0))
        {
            gameCheck = 1;
        }

        else
        {

            do
            {
                printf("Next Move [1-%d]: ", game1.length);
                scanf("%d", &nextMove);
               
                if (nextMove < 1 || nextMove > game1.length)
                {
                    printf("  Out of Range!!!\n");
                }

                else
                {
                    chractChecker = 1;
                    outRange = 1;
                }

            } while (!outRange);
            printf("\n");
           

            if (player1.hisPosition[nextMove - 1] == 1)
            {
                printf("===============> Dope! You've been here before!\n\n");
            }
            else
            {
                player1.hisPosition[nextMove - 1] = 1;
                game1.moves -= 1;
                if (game1.bomLocation[nextMove - 1] == 1 && game1.treasureLocation[nextMove - 1] == 1)
                {
                    player1.lives -= 1;
                    player1.treasureNum += 1;
                    printf("===============> [&] !!! BOOOOOM !!! [&]\n");
                    printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
                }
              
                else if (game1.treasureLocation[nextMove - 1] == 1)
                {
                    player1.treasureNum += 1;
                    printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
                }

                else if (game1.bomLocation[nextMove - 1] == 1)
                {
                    player1.lives -= 1;
                    printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
                }

                else
                {
                    printf("===============> [.] ...Nothing found here... [.]\n\n");
                }



            }

            if (player1.lives == 0)
            {
                printf("No more LIVES remaining!\n\n");
            }

            if (game1.moves == 0)
            {
                printf("No more MOVES remaining!\n\n");
            }
            

        }
    }

    printf("\n##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n");
    printf("\nYou should play again and try to beat your score!\n");

    return 0;
}