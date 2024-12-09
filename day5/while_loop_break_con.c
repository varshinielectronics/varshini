#include<stdio.h>
int main(){
    int inputnumber=5;
    int i=0;
    printf("Break: \n");
    while(++i<=inputnumber){
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }

    printf("Continue\n");
    while(++i<=inputnumber){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}