#include <stdio.h>
#include <stdlib.h>
#define TAILLEAJOUT 50

//Fonction initialisation tableau
int initTab(int* tab, int size) {
	if ((tab == NULL) || (size < 0)) {
		return -1;
	}
	else {
		int i = 0;
		for (i = 0; i < size; i++) {
			*(tab + i) = 0;
		}
	}
	return size;
}

//Affichage des N premiers element du tableau
int afficheTab(int* tab, int size, int nbElts) {
	if ((tab == NULL) || (size < 0) || (size < nbElts)) {
		return -1
	}
	else {
		int i = 0;
		for (i = 0; i < nbElts; i++) {
			printf("/ %d /", *(tab + i));
		}
	}
	return 0;
}

//Ajout d'un nombre en fin de tableau
int* ajoutElementDansTableau(int* tab, int* size, int* nbElts, int element) {
	if ((tab == NULL) || (size == NULL) || (nbElts == NULL) || (*nbElts < 0) || (*size < 0)) {
		return -1;
	}
	if (*size == *nbElts) {
		int* tmp = tab;
		tab = (int*)realloc(tab, (*size + TAILLEAJOUT) * sizeof(int));
		if (tab == NULL) {
			tab = tmp;
			free(tmp);
			return NULL;
		}
	}
	*(tab + (*nbElts)) = element;
	*(nbElts) += 1;
	return tab;
}