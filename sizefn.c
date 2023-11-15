#include<stdio.h>
void a_sort(int a[],int n);
void main(){
    int a[7]={9,1,2,7,8,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    printf("prev_array:- \t");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    a_sort(a,n);
}
void a_sort(int a[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\npost_array:- \t");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}