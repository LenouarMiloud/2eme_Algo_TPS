#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int i,number;
int main(int argc, char *argv[]) {
	//read the number
	printf("Enter the number: ");
	scanf("%d",&number);
	
	//print the first 10 multiples of a number
	printf("The Multiples of %d are : ");
	for(i=1;i<=10;i++){
		printf("%d \n",number * i);
	}
	
	return 0;
}
