#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genarateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char c1, char c2)
{
    //for rock paper siser returns 1 if c1>c2 and 0 otherwise .if c1==c2 it will return 1;
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, comScore = 0, temp;
    char playerChar, compChar;
    char dict[4] = {'r', 'p', 's'};
    printf("Welcome to Rock,paper and scissors game \n");
    for (int i = 0; i < 3; i++)
    { //Take player 1's input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for rock \nChoose 2 for paper\nChoose 3 for scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("YOu choosed %c\n\n", playerChar);

        //Generate computer's input
        printf("Computer's Turn:\n");
        printf("Choose 1 for rock \nChoose 2 for rock\nChoose 3 for scissors\n");
        temp = genarateRandomNumber(2);
        compChar = dict[temp - 1];
        printf("Computer choosed %c\n\n", compChar);

        // compere the score
        if (greater(compChar, playerChar) == 1)
        {
            
            comScore += 1;
            printf("Oh computer Got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            comScore += 1;
            playerScore += 1;
            printf("This round is draw :)\n");

        }
        else
        {
            playerScore += 1;
            printf("Yah YOu Got it!\n");

        }
        printf("You:%d :)(: Computer:%d\n",playerScore,comScore);
    }
    if (playerScore > comScore)
    {
        printf("YOu win \n");
    }
    else if (playerScore < comScore)
    {
        printf("Computer win \n");
    }
    else
    {
        printf("It's a draw");
    }
    return 0;
}