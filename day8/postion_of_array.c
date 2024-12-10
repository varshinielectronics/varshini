/*
    10  34  50  2   5  ---> min 2
*/
#include<stdio.h>
int main(){
    int arr[10]={10,34,50,2,5};
    int data =34;   // can change the data value to get thr correct position of them
    for(int i=0;i<5;i++){
        if(arr[i]==data){
            printf("The position is :%d",i);
            break;
        }
    }
}