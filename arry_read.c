#include<stdio.h>
void main(){
    int a[10];
    printf("enter 10 numbers :- \n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    //sum;
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("sum :- %d",sum);
    //average
    int length = sizeof(a)/sizeof(a[0]);
    printf("\n Average :- %d",(sum/length));
}