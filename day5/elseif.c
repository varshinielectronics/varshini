#include<stdio.h>
int main(){
    printf("enter a number:\n ");
    scanf("%d",&inputNumber);
    if(inputNumber<0){
        printf("the number is less than 0");
    }
    else if(inputNumber>=0 && inputNumber<10){
        printf("the number is greater than or equal to 0 and less than 10");
    }
    else if(inputNumber>=10 && inputNumber<20){
        printf("the number is greater than or equal to 10 and less than 20")
    }
    else{
        printf("the number is greater than or equal to 20");
    }
    return 0;
}