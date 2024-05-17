#include<stdio.h>
#include<stdlib.h>  
#include<time.h>

int main(){
    int number;
    srand(time(0)); 
    number=rand()%100+1; //generate a randam number between 1 to 100
    printf("The Number is %d", number);
    return 0;
}