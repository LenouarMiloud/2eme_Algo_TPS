#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int i,fact,number;
int main(int argc, char *argv[]) {
	//read the number
	printf("Enter the number: ");
	scanf("%d",&number);
	//calcul of factorial 
	fact = number;
	for(i=number-1;i>0;i--){
		fact*=i;
	}
	
	printf("The Factorial of %d is : %d",number,fact);
	
	return 0;
}
