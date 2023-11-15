#include<stdio.h>
void main(){
    int a[7]={2,6,8,9,12,16,19};
    int start=0,end=6 ,mid,found=0;
    int n=90;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==n){
            found=1;
            break;
        }
        else if(a[mid]<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(found){
        printf("%d is present in %dth position ",n,mid+1);
    }
    else{
        printf("not found");
    }
}