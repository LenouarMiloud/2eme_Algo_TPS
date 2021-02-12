#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int find(int decimal_number,int base)
{
    if (decimal_number == 0) 
        return 0; 
    else
        return (decimal_number % base + 10 * 
                find(decimal_number / base,base));
}
 
// Driver code 
int main()
{
    int decimal_number;
    int base;
    printf("Entre le numero decimal : ");
    scanf("%d",&decimal_number);
    
	printf("Entre la base : ");
    scanf("%d",&base);
    
    printf("%d", find(decimal_number,base));
    return 0;
}
