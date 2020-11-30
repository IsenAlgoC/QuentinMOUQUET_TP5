#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
#define TAILLEINITIALE 100

int main() {
	int* myTab1 = malloc(10 * sizeof(int));
	int* myTab2 = NULL;
	int tabSize = TAILLEINITIALE;
	int nbElts = 0;

	myTab2 = (int*)malloc(TAILLEINITIALE * sizeof(int));
	if (myTab2 != NULL) {
		initTab(myTab2, tabSize);
	}
	else {
		printf("memoire insuffisante");
		return -1;
	}
	int i = 0;
	for (i = 0; i < nbElts; i++) {
		*(myTab2 + i) = i + 1;
	}
	afficheTab(myTab2, tabSize, nbElts);
	free(myTab2);
}