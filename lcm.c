#include<stdio.h>
void main(){
    int n1,n2,lcm;
    printf("enter 2 numbers");
    scanf("%d %d %d",&n1,&n2);
    int max = n1>n2 ? n1:n2;
    // printf("%d",max);
    while(1){
        if((max % n1 == 0) && (max % n2 ==0)){
            lcm = max;
            break;
        }
        else{
            max++;
        }
    }
    printf("LCM :- %d",lcm);
}