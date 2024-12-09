#include<stdio.h>
// function declaration
int sum(int a, int b);
int main(){
    // function call
    int a,b,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d",a,b,res);
    res=sum(30,40);
    printf("the sum of 30 and 40 is %d",a,b,res);
    res=sum(50,50);
    printf("the sum of 50 and 50 is %d",a,b,res);
    res=sum(100,60);
    printf("the sum of 100 and 60 is %d",a,b,res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
