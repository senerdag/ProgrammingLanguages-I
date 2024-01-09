#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a, b, sum;
    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a number:");
    scanf("%d", &b);

    sum=a+b;

    printf("sum is %d", sum);




    float r, A;
    printf("enter a radius:");
    scanf("%f", &r);

    A=3.14159*r*r ;

    printf("area of circle is %f", A);



    int N ;
    printf("enter a number:");
    scanf("%d", &N);

    if(N%2==0)
    {
        printf("%d is even", N);
    }
    else 
    {
        printf("%d is odd", N);
    }


    
    int t;
    printf("enter a temprature:");
    scanf("%d", &t);

    if(t>0)
    {
        printf("above freezing point");
    }
    else if(t<0)
    {
        printf("below freezing point");
    }
    else
    {
        printf("at freezing point");
    }
    
    
    
    float F, C;
    printf("Enter Fahrenheit:");
    scanf("%f", &F);

    C=(F-32)/1.8;

    printf("Celcius is %f", C);
    
    
    
    float ft, cm;
    printf("Enter a feet:");
    scanf("%f", &ft);

    cm=ft*30.48;

    printf("Centimeter (cm) is %.2f", cm);


 
    float A, B, C;
    printf("Enter number A:");
    scanf("%f", &A);
    printf("Enter number B:");
    scanf("%f", &B);
    printf("Enter number C:");
    scanf("%f", &C);

    if(A>B && A>C)
    {
        printf("A is the largest number");
    }
    else if(B>A && B>C)
    {
        printf("B is the largest number");
    }
    else if (C>A && C>B)
    {
        printf("C is the largest number");
    }
    else
    {
        printf("Wrong! Try again");
    }
return 0;
}