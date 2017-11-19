#include <stdio.h>
#include <stdlib.h>
#include "compare.h"


int  compare(int args,int argv){

    int nbrMystere = 0, nbrEntre = 0, compteur = 0;
    const int MAX = 100, MIN = 1;
    nbrMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    do{

        printf("Entrer un nombre entre 0 et 100 ? : ");
        scanf("%d", &nbrEntre);
	compteur++;


        if (nbrMystere > nbrEntre)
            printf("C'est plus !\n");

        else if (nbrMystere < nbrEntre)
            printf("C'est moins !\n");

        else

            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
       	    printf("Le Nombre d'essaye est :%d\n\n",compteur);

    } while (nbrEntre != nbrMystere);  

}
