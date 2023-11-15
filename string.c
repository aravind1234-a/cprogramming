/* take 2 integer inputs from the user and perform addition ,substraction,multiplycation and division*/ 
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);
void main()
{
	int a,b;
	printf("enter the value of a and b :- ");
	scanf("%d %d",&a,&b);
	printf("Addition:-       %d \n",add(a,b));
	printf("Substraction:-   %d \n",sub(a,b));
	printf("multiplication:- %d \n",mul(a,b));
	printf("division:-       %f \n",div(a,b));
}  
int add(int a,int b)
{
	return a+b;
}       
int sub(int a,int b)
{
	return a-b;
}       
int mul(int a,int b)
{
	return a*b;
}                                    
float div(int a,int b)
{
	return a/b;
}   
   