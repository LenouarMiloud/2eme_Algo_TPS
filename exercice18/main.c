#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int vecteur[20];

void lire(vecteur x,int n){
	printf("\telement %d: ",n);
	scanf("%d",&x[n-1]);
	if(n>=2)
	lire(x,n-1); 
}

void affichage(vecteur x,int n){
	printf("%d ",x[n-1]);
	if(n>=2)
	affichage(x,n-1);
}

int somme(vecteur x,int n){
	if(n==-1)
		return 0; 
	else 
		return x[n]+somme(x,n-1);
}

int main(int argc, char *argv[]) {
	
	vecteur x;
	int n;
 
	//Opperation de lire de la chaine
	printf("Entrer le nombre des elements: ");
	scanf("%d",&n);
	printf("Introduire les elements de la chaine:\n");
	lire(x,n);
 
	//Opperation de’affichage de la chaine
	printf("La chaine des elements est: ");
	affichage(x,n);
 
	//la somme des elements
	printf("\nLa somme des elements: %d",somme(x,n-1));
	
	return 0;
}
