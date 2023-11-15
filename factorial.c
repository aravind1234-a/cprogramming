#include<stdio.h>
void main(){
    int n, fact=1;
    printf("enter the number for which fact to be found:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
}