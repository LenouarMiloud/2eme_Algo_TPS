#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	//variable
	int i,somme; 
int main(int argc, char *argv[]) {
	//initialization
	somme = 0;
	//here we jump by 3 step  
	for(i=2;i<100;i+=3){//i = i + 3
		somme += i;
	}
	
	printf("la somme des nombres est : %d",somme);
	
	return 0;
}
