#include<stdio.h>
void main()
{
    int operator1,operator2;
    printf("enter the value of operator1 :- ");
    scanf("%d",&operator1);
    printf("enter the value of operator2 :- ");
    scanf("%d",&operator2);
    getchar();
    char choice;
    printf("enter the operator :- ");
    scanf("%c",&choice);
    switch(choice)
    {
        case '+' : printf("%d + %d = %d",operator1,operator2,operator1+operator2);
                   break;
        case '-' : printf("%d - %d = %d",operator1,operator2,operator1-operator2);
                   break;
        case '*' : printf("%d * %d = %d",operator1,operator2,operator1*operator2);
                   break;
        case '/' : printf("%d / %d = %d",operator1,operator2,operator1/operator2);
                   break;
        default :printf("out of operator");
                   break;
    }
}

/* experssion :- it is a combination of operands and operator 
   ex:- 2+3=5
   here, 2 and 3 are operand
   + is a operator*/