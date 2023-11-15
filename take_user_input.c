#include<stdio.h>
void main(){
    //integer
    int a;
    printf("Enter an integer \n");
    scanf("%d",&a);
    printf("%d\n",a);

    //float
    float b;
    printf("Enter a float \n");
    scanf("%f",&b);
    printf("%f\n",b);

    //char
    char c;
    printf("Enter a character \n");
    getchar();
    scanf("%c",&c);
    printf("%c\n",c);

    //string
    char d[23];
    printf("enter a string");
    scanf("%s",d);
    printf("%s",d);
}