#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int number,i;
int main(int argc, char *argv[]) {
	//read the number 
	printf("Enter the number: ");
	scanf("%d",&number);
	//show all the dividers of this number
	printf("les diviseurs de %d sont :\n",number);
	
	for(i=1;i<=number;i++){
		if(number % i == 0)
			printf("%d\n",i);
	}
	
	return 0;
}
