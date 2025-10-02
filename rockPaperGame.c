#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * hisMoves(int a);
char * yMove(int a);
int main () {

    srand(time(NULL));
    printf("Simple Rock paper Scissors Game - Adnan\n");
    printf("Available commands : \nrock(1)\npaper(2)\nscissors(3)\nscores(4)\nreset(0)\nexit(99)\n");
    int min = 1;
    int max = 3;
    int win = 0;
    int tie = 0;
    int loss = 0;
    int yourmoves = 0;

    while (yourmoves != 99) {
          printf("\nChose A Move : ");
    scanf("%d",&yourmoves);
    int computerMove = (rand() % (max - min + 1))+min;
    if (yourmoves == computerMove) {
        printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("Both Chose The same - Tie");
        tie ++ ;
    }
    else if (yourmoves == 4 ){
        printf("Wins:%d - Ties:%d - Loss:%d",win,tie,loss);
    }
    else if (yourmoves == 99) {
        break;
    }
    else if (yourmoves ==0) {
        win = 0;
        tie=0;
        loss=0;
        printf("Reset Done");
    }
    else if (yourmoves == 1 && computerMove == 2) {
        printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You loss");
        loss++;
    }
    else if (yourmoves == 1 && computerMove == 3) {
         printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You Won");
        win++;
    }
    else if (yourmoves == 2 && computerMove == 1) {
         printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You Won");
        win++;
    }
    else if (yourmoves == 3 && computerMove == 1) {
         printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You Loss");
        loss++;
    }
    else if (yourmoves == 3 && computerMove == 2) {
     printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You Won");
        win++;
    }
    else if (yourmoves == 2 && computerMove == 3) {
         printf("You Chose %s Computer Chose %s\n",yMove(yourmoves),hisMoves(computerMove));
        printf("You Loss");
        loss++;
    }
    }
    printf("Game End Bruh\n");
    printf("Wins:%d - Ties:%d - Loss:%d",win,tie,loss);

    return 0;
}
//it shows what moves he chose 
char * hisMoves(int a) {
    switch (a) {
        case 1:
        return "Rock";
        break;
        case 2:
        return "Paper";
        break;
        case 3:
        return "Scissor";
        break;
    }
}
char * yMove(int a) {
     switch (a) {
        case 1:
        return "Rock";
        break;
        case 2:
        return "Paper";
        break;
        case 3:
        return "Scissor";
        break;
    }
}