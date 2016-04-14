#ifndef LISTENODE_HPP
#define LISTENODE_HPP

#include <stdio.h>
#include <stdlib.h>
#include "structures_tp2.h"


//==== Déclaration des structures pour la liste chainée

typedef struct Node{
	BLOC* un_bloc;
	Node* suivant; 
}NODE;

typedef struct listeNode{
	Node* racine;
	int taille;
}LISTECHAINEE;


//==== Fonctions pour manipuler la liste chaînée 
//(seulement pour ce qui nous intéresse)

//Insertion d'un noeud au début de la liste
void insert_beginning(LISTECHAINEE* liste, BLOC* bloc1){
	if (liste->racine == NULL){
		Node* node;
		node= (Node*) malloc(sizeof(Node));
		node->un_bloc=bloc1;
		node->suivant=NULL;
		liste->racine = node;
		liste->taille=1;
	}
	else{
		NODE* temp= liste->racine;
		NODE* newNode;
		newNode= (NODE*) malloc(sizeof(Node));
		newNode->un_bloc=bloc1;
		newNode->suivant=temp;
		liste->racine=newNode;
		liste->taille++;
	}	
}

//Suppression d'un noeud au début de la liste
BLOC* remove_beginning(LISTECHAINEE* liste){
	NODE* temp= liste->racine;
	liste->racine=liste->racine->suivant;
	liste->taille--;
	return temp->un_bloc; //voir s'il faut delete le noeud de la liste chaînée
}

//Retourne la taille de la liste chaînée
int taille(LISTECHAINEE* liste){
	return liste->taille;
}

#endif
