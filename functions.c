/* there are 4 types of functions
 1. no parameter no return type
 2. parametes and return type
 3. no parameters with return type
 4. parameters and no return type*/

 //no parameter no return type
 #include<stdio.h>
 void addition();
 int addition1(int x, int y);
 int addition2();
 void addition3(int x, int y);
 void main()
 {
    addition(); //no parameter no return type

    //parametes and return type
    int a= addition1(2,3);
    printf("\n this is parameters with return type %d",a);

    //no parameters with return type
    int b= addition2();
    printf("\n this is no parameters with return type %d",b);

    //parameters and no return type
    addition3(2,3);
 }

 void addition()
 {
    int a=2, b=3;
    printf("\n this is no parameter no return type : %d",(a+b));
 }

 int addition1(int x, int y){
    return (x+y);
 }

 int addition2(){
    int x=2,y=3;
    return (x+y);
 }
 void addition3(int x, int y){
    printf("\n this is parameters and no return type %d",(x+y));
 }