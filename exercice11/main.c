#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
int Un,longueur=1;
 
printf("Tapez le premier terme u1 : ");
scanf("%d",&Un);
 
printf("\nLa suite de Syracuse est : %d ",Un);
 
while(Un!=1)
    {
    if (Un%2==0)
        {
            Un=Un/2;
            printf("%d ",Un);
        }
 
    else
        {
            Un=3*Un+1;
            printf("%d ",Un);
        }
    longueur++;
    }
 
printf("\n\nElle a pour longueur : %d\n\n",longueur);
 
system("PAUSE");
return 0;
}
