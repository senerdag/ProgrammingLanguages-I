#include <stdio.h>
#include <string.h>


int main()
{
    /*
int x=0,y=1;
char se[50];
printf("cumlenizi girin: ");
fgets(se,50,stdin);
for(int i =0;1;i++)
{
    
    if(se[i]=='a')
    {
        x++;
    }
    if(se[i]==' '||se[i]=='\0')
    {
        printf("%d. kelimenizde %d adet a harfi var\n",y,x);
        y++;
        x=0;
    }
    if(se[i]=='\0')
    {
        break;
    }

}
*/

int i,j,n=-2;
char za[50],va[50];
printf("1. kelime girin:");
fgets(za,50,stdin);
printf("2. kelime girin:");
fgets(va,50,stdin);
for(i=0;va[i]!='\0';i++)
{
    n++;
}
printf("%s",za);
for(i=n;i>=0;i--)
{
    printf("%c",va[i]);
}




















return 0;




}