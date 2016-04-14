#include <stdio.h>
#include <stdlib.h>
#include "structures_tp2.h"
#include "ListeNode.h"

int main()
{
    printf("Test #1 : Insertions \n");
    bool tests_reussis = true;

    LISTECHAINEE* liste;
	liste = (LISTECHAINEE*) malloc( sizeof( listeNode ) );
	liste->racine=NULL;
	liste->taille=0;

    if(liste->taille != 0){
        printf(" Erreur #1\n");
        tests_reussis = false;
    }
    for(int i=0;i<5;i++){
		BLOC* bloc1;
		bloc1 = (BLOC*) malloc(sizeof(bloc));
		bloc1->numero_bloc=i;
        insert_beginning(liste, bloc1);
        if(liste->taille==0){
            printf(" Erreur #2\n");
            tests_reussis = false;
        }
    }
	if(liste->taille != 5){
			printf("Erreur addition\n");
	}else{
		for(int i=0;i<5;i++){
			printf("%d \n", liste->racine->un_bloc->numero_bloc);
			BLOC* a =remove_beginning(liste);
			printf("%d \n", a->numero_bloc);
			printf("taille %d\n", liste->taille);
		}
	}

    if(tests_reussis)
        printf("OK\n");
    return 0;
}
