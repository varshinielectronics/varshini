#include<stdio.h>

//func dec
// void sum(int a, int b);
void sum(int, int);

int main(){
    int a=10,b=20,res;
    sum(a,b);  // here in paranthesis we are giving the values a and b these is a parameter
    return 0;
}

// fun def
void sum(int a, int b){
    printf("the sum is %d",a+b);  // here we have not used the return 0; because no return
}
