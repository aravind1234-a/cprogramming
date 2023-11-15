#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n :- ");
    scanf("%d",&n);
    printf("\n for loop");
    // for loop
    for(int i=1;i<=n;i++){
        printf("\n %d",i);
    }
    // while loop
    printf("\n while loop");
    int j=1;
    while(j<=n){
        printf("\n %d",j);
        j++;
    }
    //do while
    printf("\n do-while loop");
    int k=1;
    do{
        printf("\n %d",k);
        k++;
    }while(k<=5);
}