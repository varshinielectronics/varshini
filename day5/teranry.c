#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a number: ");
    scanf("%d",&inputnumber);
    (inputnumber>5)?printf("number is greater than 5")
    :printf("number is less than 5");
    return 0;
}