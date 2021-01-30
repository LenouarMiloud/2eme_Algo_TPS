#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int tab1[6];
	int tab2[6];
	int i,j;
int main(int argc, char *argv[]) {
	
	for(i=0;i<6;i++)
		tab1[i] = i+1;
		
	for(i=0;i<6;i++)
		printf("%d  ",tab1[i]);
	
	printf("\n-------------------\n");
	
	tab2[0] = tab1[0] * tab1[1];
	tab2[5] = tab1[5] * tab1[4];
	
	i=1;j=1;
	while((i<5) && (j<5)){
		tab2[j] = tab1[i-1] * tab1[i+1];
		i++;j++;
	}
	
	for(i=0;i<6;i++)
		printf("%d  ",tab2[i]);
			
	
	return 0;
}
