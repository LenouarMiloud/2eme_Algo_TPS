#include<stdio.h>
#include<stdlib.h>
typedef struct joueur{
		char pseudo[30];
	    int score;
	    };

int i,j;
struct joueur joueurs[3];
joueur swap;
 main(){     
	 
	 printf("le nombre maximum de joueur est de 10\n");
     printf("donnez les element de la liste  :\n ");
         for(i=0;i<3;i++) {					    
     
	         printf("le score de joueur %d est :  \n",i);	
             scanf("%d", &joueurs[i].score);
	 
	         printf("le pseudo de joueur %d est  : \n",i); 
             scanf("%s", &joueurs[i].pseudo);
         
		 } 
		 
		 for(i=0;i<2;i++){
		 	for(j=i+1;j<3;j++){
		 		if(joueurs[i].score < joueurs[j].score ){
		 			swapChar = joueurs[i].pseudo;
		 			swap.score = joueurs[i].score;
		 			joueurs[i].pseudo = joueurs[j].pseudo;
		 			joueurs[i].score = joueurs[j].score;
		 			joueurs[j].pseudo = swap.pseudo; 
		 			joueurs[j].score = swap.score;
				 }
			 }
		 }
 
          printf("Les elements de la liste:\n"); 
             for(i=0 ; i<3 ; i++){
               printf("%d    ",joueurs[i].score);
               printf("%s    \n",joueurs[i].pseudo);	

             }
      return 0;			 
 }



