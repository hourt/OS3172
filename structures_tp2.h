#ifndef STRUCTURES_HPP
#define STRUCTURES_HPP

#include <time.h>

typedef struct tm TEMPS;


typedef struct indirection_simple{
   int no_bloc[256];
} INDIRECTIONSIMPLE;

typedef struct indirection_double{
   INDIRECTIONSIMPLE* is[256];
} INDIRECTIONDOUBLE;

typedef struct indirection_triple{
   INDIRECTIONDOUBLE* id[256];
} INDIRECTIONTRIPLE;

 



typedef struct i_node{

  char mode[11];
  unsigned int nbLiens;
  int  UID;
  int  GID;
  unsigned int taille;
  TEMPS creation;
  TEMPS acces;
  TEMPS modification;
  
  int premiersBlocs[10];
  INDIRECTIONSIMPLE* isimple;
  INDIRECTIONDOUBLE* idouble;
  INDIRECTIONTRIPLE* itriple;

} INODE;





typedef struct element_ligne_bloc{

  unsigned int position;
  char * nom;
  char type;
  INODE* inode;
  
} LIGNEBLOC;

typedef struct element_liste_bloc{

  LIGNEBLOC liste[6];
  struct element_liste_bloc* suivant;
  
} LISTEREPERTOIRE;

typedef struct element_repertoire{

  LISTEREPERTOIRE* repertoire;
  
} BLOCREPERTOIRE;

/*typedef struct element_fichier{

  unsigned short utilise;
  
} BLOC;
*/

typedef struct bloc{
	unsigned short numero_bloc;
} BLOC;

#endif
