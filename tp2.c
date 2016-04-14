#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include "structures_tp2.h"
#include "ListeNode.h"

extern int errno;

#define MAX_INODE 69137
#define MAX_BLOCS 52224 
#define MAX_MEM 

int main(int argc, char* argv[]){

	
	//Création de la liste de blocs libres
	LISTECHAINEE* liste_bloc_libres;
	liste_bloc_libres= (LISTECHAINEE*) malloc(sizeof(LISTECHAINEE));
	for(int i=0; i<MAX_BLOCS; i++){
		BLOC* bloc;
		bloc = (BLOC*) malloc(sizeof(BLOC));
		bloc->numero_bloc=i+1;
		insert_beginning(liste_bloc_libres, bloc);
	}

	//Pour se rappeler du répertoire courant
	//int inode_courant;
	
	char prompt[]="initial";
	char path[]="";

	//Début du shell
	while(strcmp(prompt, "logout")!=0){
		printf("/#%s ",path);
		scanf("%s", prompt); //à revoir

		if(strcmp(prompt,"mkdir")==0){
		}
		else if(strcmp(prompt,"rmdir")==0){
		}
		else if(strcmp(prompt,"cd")==0){
		}
		else if(strcmp(prompt,"ls")==0){
		}
		else if(strcmp(prompt,"crf")==0){
		}
		else if(strcmp(prompt,"cp")==0){
		}
		else if(strcmp(prompt,"mv")==0){
		}
		else if(strcmp(prompt, "rm")==0){
		}
		else if(strcmp(prompt,"blc")==0){
		}
		else{
			if(strcmp(prompt, "logout")!=0){
				printf("Commande non valide.\n");
			}
		}
	}

	return 0;
}
