#include<stdio.h>
#include<stdlib.h>  
#include<time.h>

int main(){
    int  guess , number, nguesses=1;
    srand(time(0)); 
    number=rand()%100+1; //generate a randam number between 1 to 100
    // printf("The Number is %d\n", number);
    // keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number\n");
        }
        else if(guess<number) {
             printf("Higher number\n");
        }
        else{
            printf("you guessed it in %d attempts\n", nguesses);
        }     
        nguesses++;
    }
    while(guess!=number);
    return 0;
}