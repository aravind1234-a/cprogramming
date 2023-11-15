#include<stdio.h>
int add_wp_wr(int ,int );
void add_wp_wor(int ,int );
int add_wop_wr();
void add_wop_wor();
void main()
{
    int a;
    a=add_wp_wr(2,3);
    printf("sum _wp_wr:- %d \n",a);
    add_wp_wor(3,3);
    printf("sum _wop_wr:- %d\n",add_wop_wr());
    add_wop_wor();
}
int add_wp_wr(int a,int b)
{
    return a+b;
}
void add_wp_wor(int a,int b)
{
    printf("sum _wp_wor:- %d \n",(a+b));
}
int add_wop_wr()
{
    int a=3,b=0;
    return a+b;
}
void add_wop_wor(){
    int a=9,b=1;
    printf("sum add_wop_wor:- %d",(a+b));
}