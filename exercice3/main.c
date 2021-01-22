#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int i,number,num_pos,num_neg,num_null;
int main(int argc, char *argv[]) {
	//the number of positive number
	num_pos = 0;
	//the number of negative number
	num_neg	= 0;
	//the null number
	num_null = 0;
	
	for(i=0;i<10;i++){
		printf("Enter number: ");
		scanf("%d",&number);
		//positive number
		if(number > 0)
			num_pos += 1; // num_pos = num_pos + 1 ;
		//negative number
		else if (number < 0)
			num_neg += 1;
		//null number	
		else
			num_null += 1;	
	}
	
	printf("The number of positive number is %d \n",num_pos);
	printf("The number of negative number is %d \n",num_neg);
	printf("The number of null number is %d \n",num_null);
	
	return 0;
}
