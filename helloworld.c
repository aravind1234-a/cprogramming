#include<stdio.h>    // standard input output (i/o) header file
void main()          // main program starts 
{
	char b;         //character    "char" is the key word used 
	char a[20];    //string         "char[size]" is the key word used
	int c;        //integer         "int" is the key word used
	float d;     // float            "float" is the key word used
	
	// character
	/*  character- A single alphabet is called a character
	    "char" is the key word used 
	    %c- is a format specifier for characters
	    &- ampersand is used
	    \n- it is symbol for new line  */
	    
	printf("enter a character \n");
	scanf("%c",&b);
	printf("the character is = %c \n",b);
	
	// String
	/*  String- A String is a collection of characters
	    "char[size]" is the key word used
	    %s- is a format specifier for string
	    &- ampersand is not used
	    \n- it is symbol for new line  */
	    
	printf("enter a String \n");
	scanf("%s",a);
	printf("the String is = %s \n",a);
	
	//integer
	/*  integer- A integer is simply a number
	    "int" is the key word used
	    %d- is a format specifier for string
	    &- ampersand is  used
	    \n- it is symbol for new line  */
	    
	printf("enter a number(integer) \n");
	scanf("%d",&c);
	printf("the number(integer) is = %d \n",c);
	
	
	// float 
	/*  float- A float is a decimal number
	    "float" is the key word used
	    %d- is a format specifier for string
	    &- ampersand is  used
	    \n- it is symbol for new line  */
	    
	printf("enter a decimal number \n");
	scanf("%f",&d);
	printf("the decimal number is = %f \n",d);
}
