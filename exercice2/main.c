#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int number,i;
int main(int argc, char *argv[]) {
	//read the number
	printf("Enter the number: ");
	scanf("%d",&number);
	//show the first 10 multiple of this number
	printf("The first 10 multiple of %d are :\n",number);
	for(i=1;i<=10;i++){
		printf("%d \n",number * i);
	}
	
	return 0;
}
