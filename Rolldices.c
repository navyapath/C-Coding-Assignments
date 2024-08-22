#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RollDice(){
    return (rand()%6+1);
}
int PlayerTurn(){
    int roll1=RollDice();
    int roll2=RollDice();
    int roll3=RollDice();
    int sum= roll1+roll2+roll3;
    printf("%d %d %d Sum: %d\n",roll1,roll2,roll3,sum);
    return sum;
}
int main()
{
    int Player1,Player2;
    int Player1Win=0,Player2Win=0;
    printf("Player 1 rolls the die\n");
    srand(time(NULL));
    Player1=PlayerTurn();
    if(Player1==10){
        Player1Win=1;
        printf("Player 1 wins the game.");
    }
    printf("Player 2 rolls the die\n");
    Player2=PlayerTurn();
    if(Player2==10){
        Player2Win=1;
        printf("Player 2 wins the game.");
    }
    if(Player1Win=1){
        printf("Player 1 wins the game with the sum of 10.");
    }
    else if (Player2Win=1){
    
        printf("Player 2 wins the game with the sum of 10.");
    }
    else{
        printf("None got valid results to continue the game.");
    }
    return 0;
}



