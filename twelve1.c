#include<stdio.h>
void main(){
    int a[3],temp;
    printf("enter 3 numbers:- ");
    // taking input from user
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    
    // logic
    for(int j=0;j<3;j++){
        for(int k=0;k<3-j;k++){
            if(a[k]>a[k+1]){
                temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }

    //output
    printf("output:- ");
    for(int i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
}