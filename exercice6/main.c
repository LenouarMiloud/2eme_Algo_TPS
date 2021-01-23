#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int number,i,find;
int main(int argc, char *argv[]) {
	//using this for testing if -45 is belong the set of numbers 
	find=0;
	//reading and testing 
	for(i=0;i<10;i++){
		printf("Enter Number: ");
		scanf("%d",&number);
		if(number == -45)
			find = 1;
	}
	
	if(find == 1)
		printf("-45 is belong this numbers");
	else
		printf("-45 is not belong this numbers");	
	
	return 0;
}
