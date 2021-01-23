#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int a,b,x;
int main(int argc, char *argv[]) {
	//read the first number
	printf("Enter a :");
	scanf("%d",&a);
	//read the second number
	printf("Enter b :");
	scanf("%d",&b);
	
	// find the PGCD 
	if((a>0) && (b>0)){
		if(a>b){
			while(b != 0){
				x = a % b;
				a = b;
				b = x;
			}
		}
	}
	//show the PGCD of a and b 
	printf("le PGCD est : %d",a);
	
	
	return 0;
}
