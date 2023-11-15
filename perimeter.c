#include<stdio.h>
void main()
{
    int a,len,bre;
    printf("\nenter the value of length=");
    scanf("%d",&len);
    printf("\nenter the value of breath=");
    scanf("%d",&bre);
    a=len+bre;
    printf("\nperimeter of rectangle value=%d\n",2*a);

    int r;
    float b,e;
    printf("\n\nenter the value of radius=");
    scanf("%d",&r);
    b=3.14*r*r;
    printf("\narea of circle is=%f",b);
    printf("\n\ndiameter of circle=%d",2*r);
    e=2*3.14;
    printf("\n\ncircumference of the circle=%f",e*r);
}