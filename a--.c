#include<stdio.h>
void main(){
    int a=3;

    int x = a--;  //this operator first assings and then increments 
    //x=3
    //a=2
    printf("x = %d \n",x);
    printf("a = %d \n",a);

    int y = --a;   // this operator firsts increments and then assigns it to the variable
    //y=1
    //a=1
    printf("y = %d \n",y);
    printf("a = %d",a);
}