#include "domande_anagrafica.h"
#include <stdio.h>
Bool domande_anagrafica(void) {
	char a;
	printf("Sei nato?\n[s]i', [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	printf("Hai piu' di 18 anni?\n[s]i', [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	printf("Ti senti giovane?\n[s]i', [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	return TRUE;
	
}
