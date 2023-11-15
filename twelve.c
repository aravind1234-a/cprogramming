#include<stdio.h>
void main(){
    int n1,n2,n3;
    printf("enter 3 numbers :-\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    // printf("\nStep1:-  %d %d %d",n1,n2,n3);
    if(n2>n3){
        int temp=n2;
        n2=n3;
        n3=temp;
    }
    // printf("\nStep2:-  %d %d %d",n1,n2,n3);
    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    // printf("\nStep3:-  %d %d %d",n1,n2,n3);
    printf("\n%d\n%d\n%d",n1,n2,n3);
}