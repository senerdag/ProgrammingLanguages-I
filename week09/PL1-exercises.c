#include <stdio.h>
#include <stdlib.h>



int main()
{
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




    int N, F=1;
    printf("Enter the number to take the factorial:");
    scanf("%d", &N);

    for(int i=1; i<=N; i++)
    {
        F=i*F ;
    }
    printf("Factorial:%d", F);




    int i=1002;
    while(i<2000)
    {
        printf("%d ", i);
        i=i+2 ;
    }



    int nmb, temp, nmbreverse=0;
    printf("Enter a number:");
    scanf("%d", &nmb);

    temp=nmb;
    while(nmb>0)
    {
        nmbreverse=nmbreverse*10+nmb%10 ;
        nmb/=10 ;
    }

    if(nmbreverse==temp)
    {
        printf("%d is palindrom number ", temp);
    }
    else
    {
        printf("%d is not palindrom number", temp);
    }
return 0;
}