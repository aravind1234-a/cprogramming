#include<stdio.h>
int addr(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b,c;
    c=addr(10,8);
    printf("%d",c);
}
