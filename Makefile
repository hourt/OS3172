#Makefile pour test liste_chainee

#Configuration avec debugage
OPTIONS = -g -O0 -Wall

#Configuration avec optimisation
#OPTIONS = -O3 -Wall

all: test_liste tp2

test_liste: test_liste.c ListeNode.h structures_tp2.h
	$(CXX) $(OPTIONS) -o test_liste test_liste.c

tp2: tp2.c ListeNode.h structures_tp2.h
	$(CXX) $(OPTIONS) -o tp2 tp2.c

clean :
	rm -f test_liste
	rm -f tp2

