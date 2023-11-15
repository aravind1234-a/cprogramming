#include<stdio.h>
void main(){
    int a=5,b=10,c=12,d=7;
    // int x=(a++ * b--);
    // int y=(--c *10);
    // printf("x=%d \n y=%d\n",x,y);
    d=(a++ * b--)+(--c *10);
    printf("a=%d \nb=%d \nc=%d \nd=%d",a,b,c,d);
}