#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,D,r1,r2,real,img;
    // user inputs
    printf("enter the values of a,b and c");
    scanf("%f %f %f",&a,&b,&c);
    // discriminant
    D=(b*b)-(4*a*c);
    printf("%f\n",D);
    // D =0 >0 <0
    if(a==0 && b==0 ){
        printf("not a quadratic equation \n");
    }
    else{ 
        if(D==0){
        printf("roots are real and equal \n");
        r1=(-b)/2*a;
        printf("the root is %f",r1);
        }
        else if(D>0){
            printf("the roots are real and distinct \n");
            r1=((-b)+ sqrt(D))/2*a;
            r2=((-b)- sqrt(D))/2*a;
            printf("the root1 = %f \n",r1);
            printf("the root2 = %f \n",r2);
        }
        else{
            printf("the roots are complex \n");
            real= (-b)/2*a;
            img= sqrt(D)/2*a;
            printf("the root1 = %f + %.0fi \n",real,img);
            printf("the root2 = %f - %.0fi \n",real,img);
        }
    }
}