#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct noeud {
			int val;
			struct noeud * suivant;
			}noeud;			
noeud * ajout_fin(noeud * lst,int x){
	noeud * p=NULL;
	p=(noeud *) malloc(sizeof(noeud));
	if (p==NULL)
	    exit(-1);
	else{
		p->val=x; /* valeur à affecter au nœud */
		p->suivant=NULL; /* car il sera
	certainement le dernier */
	if (lst==NULL) 
		return p; /* il y'aura un
	seul élement */
	else{
		 noeud * q=lst;
	// parcours de la liste pour atteindre la fin
	while (q->suivant!=NULL) 
		q=q->suivant;
	q->suivant=p;
	return lst;} 
	    } 
}
void afficher(noeud*lst){
	if(lst==NULL) puts("La liste est vide");
	else { noeud*p=lst;
		while(p!=NULL){
			printf("%d\t",p->val);
			p=p->suivant;
		}	
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	
	int n,i,valeur;
	noeud*liste=NULL;
	printf("Donnez le nombre d'elements de votre liste: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Intoduire la valeur du noeud %d : ",i);
		scanf("%d",&valeur);
		liste=ajout_fin(liste,valeur);
	}
	afficher(liste);
	
	char message[] = "Hello World";
		
	return 0;
}
