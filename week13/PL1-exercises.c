#include <stdio.h>
#include <string.h>
/*
void getir(char a[50])
{
    int z=1,u=strlen(a);
    char temp;
    for(int i=0;i<u;i++)
    {
        for(int j=i+1;j<u;j++)
        {
            if(a[i]>a[j]&&a[i]!=' ')
            {
                if(a[j]!=' ')
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
                }
            }
        }
       
    }
    printf("\n%s",a);

}

*/
/*
void hesapla(char b[],int u)
{
    int c=strlen(b),counter=0;
    for(int i = 0;i<c;i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='a'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='U'||b[i]=='O')
        {
            counter++;
        }
    }
    printf("%d kadar sesli harf var.",counter);

}
*/

/*
void func(int a[],int b)
{
    int temp,x;
    printf("sayi girin: ");
    scanf("%d",&x);
    a[10]=x;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        printf("\n%d. eleman = %d",i+1,a[i]);
    }

}
*/

void enbuyukiki(int a[],int b)
{
    int temp1=0,temp2,temp=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                temp1=a[i];
                temp=i;
            }
           
            
        }
    }
    a[temp]=0;
     for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>=a[j])
            {
                temp2=a[i];
            }
           
            
        }
    }

    printf("En buyuk iki deger: %d,%d",temp1,temp2);
}



int main()
{
    /*
char a[50];
printf("Cumle giriniz: ");
fgets(a,50,stdin);
getir(a);
*/
/*
char b[50];
printf("Kelime giriniz: ");
fgets(b,50,stdin);
hesapla(b,50);
*/
/*
int a[11];
for(int i=0;i<10;i++)
{
    printf("%d. elemani giriniz: ",i+1);
    scanf("%d",&a[i]);
}
func(a,11);
*/

int a[10];
for(int i=0;i<10;i++)
{
    printf("%d. elemami giriniz: ",i+1);
    scanf("%d",&a[i]);
}
enbuyukiki(a,10);







    return 0;
}