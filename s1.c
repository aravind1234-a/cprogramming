#include<stdio.h>
#include<ctype.h>
double ctof(double );
double ftoc(double );
void main()
{
    char corf;
    double c,f;
    printf("enter ur unit of temperature F or C :- ");
    scanf("%c",&corf);
    switch(toupper(corf))
    {
        case 'C':printf("enter the value in .C :- ");
                 scanf("%lf",&c);
                 f=ctof(c);
                 printf("%lf C ---> %lf F",c,f);
                 break;
        case 'F':printf("enter the value in .F :- ");
                 scanf("%lf",&f);
                 c=ftoc(f);
                 printf("%lf F ---> %lf C",f,c);
                 break;
        default:printf("ur input is out of range");
                 break;

    }
}
double ctof(double c)
{
    return ((c*1.8)+32);
}
double ftoc(double f)
{
    return ((f-32)*5/9);
}
