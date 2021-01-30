#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int i,j;
int main(int argc, char *argv[]) {
	//initiale value of i 
	i=1;
	
	while(i<=10){
		for(j=i;j<=i*10;j+=i){
			printf("%d  ",j);
		}
		printf("\n");
		i+=1; //i = i+1;
	}
	
	return 0;
}
