#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
 int table[10];
 int i,max,min;
int main(int argc, char *argv[]) {	
	
	for (i=0;i<10;i++){
		printf("Number %d :",i);
		scanf("%d",&table[i]);
	}
	min = table[0];
	max = table[0];
	
	for(i=1;i<10;i++){
		if(table[i]<min)
			min = table[i];
		else if(table[i]>max)
			max = table[i];	
	}
	printf("The Max is : %d \n",max);
	printf("The Min is : %d \n",min);
	
	return 0;
}
