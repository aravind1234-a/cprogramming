#include<stdio.h>
#include<string.h>
void main(){
    char name[25];
    //printf("\n enter ur name :- ");
    //scanf("%s",name);
    while(strlen(name)==0){
        printf("\n enter ur name :- ");
        scanf("%s",name);
        printf("ok");
    }
    printf("ur name is %s",name);
}