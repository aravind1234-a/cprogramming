#include<stdio.h>
#include<ctype.h>
void main(){
    char c;
    printf("enter the character :- ");
    c=getchar();
    if(islower(c)){
        printf("%c",toupper(c));
    }
    else if(isupper(c)){
        printf("%c",tolower(c));
    }
    else{
        printf("%c",c);
    }
}