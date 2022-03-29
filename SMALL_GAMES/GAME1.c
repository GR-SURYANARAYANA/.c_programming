//ROCK PAPER SCISSOR GAME
#include<stdio.h>
int GUESS()
{
    int n,guess;
    printf("INSTRUCTION TO PLAY THE GAME ");
    printf("\nENTER: ");
    printf("\n 1.FOR ROCK \n 2.FOR PAPER \n3.FOR SCISSORS");
    printf("\nenter the choice ");
    scanf("%d",&n);
    printf("\n");
    switch (n)
    {
        case 1: printf("ROCK vs ");
            break;
        case 2: printf("PAPER VS");
            break;
        case 3: printf("SCISSOR VS");
            break;
       loop:default: printf("INVALID CHOICE vs ");
                 break;
    }
    guess=(random()%3 +1);
    //anf("%d",&guess);
    switch (guess)
    {
        case 1: printf(" ROCK");
            break;
        case 2: printf(" PAPER");
            break;
        case 3: printf(" SCISSOR");
            break;
    }
    if(n==guess)
        printf("\nGAME DRAW");
      else if(n==1 && guess==2)
          printf("\nPAPER WINS");
            else if(n==1 && guess==3)
                printf("\nROCK WINS");
                  else if(n==2 && guess==1)
                printf("\nPAPER WINS");
                   else if(n==2 && guess==3)
                      printf("\nSCISSOR WINS");
                         else if(n==3&& guess==1)
                            printf("\nROCK WINS");
                             else if(n==3&& guess==2)
                                      printf("\nSCISSOR WINS");
                    
}
int main()
{
    int n,i;
    printf("WELCOME TO THE GAME OF ROCK PAPER SCISSOR");
    printf("\nENTER THE NUMBER OF GAME YOU WANT TO PLAY ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nGAME %d\n",i);
        GUESS();
        
    }
    return 0;
}

/*Output
WELCOME TO THE GAME OF ROCK PAPER SCISSOR
ENTER THE NUMBER OF GAME YOU WANT TO PLAY >>>10

GAME 1
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>1

ROCK vs  PAPER
PAPER WINS
GAME 2
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>2

PAPER VS PAPER
GAME DRAW
GAME 3
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>3

SCISSOR VS ROCK
ROCK WINS
GAME 4
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>4

INVALID CHOICE vs  PAPER
GAME 5
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>3

SCISSOR VS SCISSOR
GAME DRAW
GAME 6
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>3

SCISSOR VS PAPER
SCISSOR WINS
GAME 7
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>2

PAPER VS PAPER
GAME DRAW
GAME 8
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>2

PAPER VS ROCK
PAPER WINS
GAME 9
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>3

SCISSOR VS ROCK
ROCK WINS
GAME 10
INSTRUCTION TO PLAY THE GAME 
ENTER: 
 1.FOR ROCK 
 2.FOR PAPER 
3.FOR SCISSORS
enter the choice >>>2

PAPER VS PAPER
GAME DRAW

Process Finished.
>>>*/