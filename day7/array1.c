
#include<stdio.h>
int main(){
    char arr[5];
    printf("Enter the array elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elemets are: \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}
