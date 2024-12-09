#include<stdio.h>
int main(){
   int inputNumber=0;
   printf("enter a number:\n");
   scanf("%d",&inputNumber);
    switch(inputNumber){
        case1:{
            printf("the given number is 1");
            break;
        }
        case2:{
            printf("the given number is 2");
            break;
        }
        case3:{
            printf("the given numbr is 3");
            break;
        }
        default:{
            printf("the given number is greater than 3");
        }
    }
    return 0;
}