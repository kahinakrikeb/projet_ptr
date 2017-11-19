#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>


/* Les villes */
#define A 0
#define B 1
#define C 2
#define D 3


/* Code des threads */
void* train_de_A_vers_C(void* arg);
void* train_de_D_vers_A(void* arg);


/* Moniteur : gestion du chemin de fer  */
void utiliser_le_segment(int ville_depart, int ville_arrivee)
{
 ****
}

void liberer_le_segment(int ville_depart, int ville_arrivee)
{
 ****
}







int main(int argc, char* argv[])
{

	/* Creer autant de trains que 
		necessaire */
    ****
}


void* train_de_A_vers_C(void* arg)
{
	utiliser_le_segment(A, B);
	printf("Train %d : utilise segment AB \n",pthread_self());
	liberer_le_segment(A, B);

	utiliser_le_segment(B, C);
	printf("Train %d : utilise segment BC \n",pthread_self());
	liberer_le_segment(B, C);

	pthread_exit(NULL);
}

void* train_de_D_vers_A(void* arg)
{
	utiliser_le_segment(D, B);
	printf("Train %d : utilise segment DB \n",pthread_self());
	liberer_le_segment(D, B);

	utiliser_le_segment(A, B);
	printf("Train %d : utilise segment BA \n",pthread_self());
	liberer_le_segment(A, B);

	pthread_exit(NULL);
}










int tirage_aleatoire(double max)
{
        int j=(int) (max*rand()/(RAND_MAX+1.0));
        if(j<1)
                j=1;
        return j;
}



void attendre(double max)
{
        struct timespec delai;

        delai.tv_sec=tirage_aleatoire(max);
        delai.tv_nsec=0;
        nanosleep(&delai,NULL);
}


