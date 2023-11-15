#include<stdio.h>
void main(){
    int a=5,b=12,c=20,d;
    // int x=(a++ * b--);
    // int y=(--c *10);
    // printf("x=%d \n y=%d\n",x,y);
    d=(a>b)||(++b<20);
    printf("a=%d \n b=%d \n c=%d \n d=%d",a,b,c,d);
}