#include<stdio.h>
void main(){
    int a=1;

    int x = a++;  //this operator first assings and then increments 
    //x=1
    //a=2
    printf("x = %d \n",x);
    printf("a = %d \n",a);

    int y = ++a;   // this operator firsts increments and then assigns it to the variable
    // //y=3
    // //a=3
    printf("y = %d \n",y);
    printf("a = %d",a);
}