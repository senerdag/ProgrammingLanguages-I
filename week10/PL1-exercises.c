#include <stdio.h>
#include <stdlib.h>



int main()
{
    float s[8],t;
    int i;
    for(i=0 ; i<8 ;i++)
    {
    printf("%d. enter the number:",i+1);
    scanf("%f",&s[i]);
    }
    for(i=0 ; i<8 ; i++)
    {
    t += s[i];
    }
    printf("Average of entered values:%.2f",t/8);
   


    int numbers[10];
    int input;
    int count = 0;
    int i;
    while (input != -1 && count<10)
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &input);

        if (input != -1)
        {
            if (count < 10) 
            {
                numbers[count] = input;
                count++;
            } 
            else 
            {
                printf("Maximum limit of 10 numbers reached.\n");
                break;
            }
        }
    } 
    
    
    printf("Squares of the entered numbers:\n");
    for (i = 0; i < count; i++) 
    {
        printf("%d squared is %d\n", numbers[i], numbers[i] * numbers[i]);
    }




  int maxnumber = 99999;
  int digits[5];
  int i = 0;
  while (maxnumber > 0)
   {
    digits[i] = maxnumber % 10;
    maxnumber /= 10;
    i++;
  }

  printf("Digits of the maximum 5-digit number: ");
  for (int j=i-1; j>=0; j--) 
  {
    printf("%d ", digits[j]);
  }


    int arr[10] ;
    for(int i=0; i<10; i++)
    {
        printf("Enter the %d-element array from the keyboard:", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=9; i>-1; i--)
    {
        printf("%d", arr[i]);
return 0;
}