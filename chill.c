#include<stdio.h>
void main(){
    int prod;
    int m[3]={3,2,1};
    for(int i=0;i<3;i++){
        prod=prod*m[i];
    }
    printf("%d",prod);
}