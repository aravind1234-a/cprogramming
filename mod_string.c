#include<stdio.h>
#include<string.h>

/* strlen()- string function that gives the length of the string
   strrev()- string function that gives the reverse of the string
   strcat()-string function that combines two strings*/

void main()
{
    char a[20]="abc";
    char b[20];
    printf("%s \n",a);
    printf("the lenghth of the string is :- %d\n",strlen(a));
    for(int i=0;i<strlen(a);i++)
    {
        printf("%d\n",i);
    }
    b[20] = strrev(a);
    printf("%s",b);
    printf("%s",strcat(a,b));
}