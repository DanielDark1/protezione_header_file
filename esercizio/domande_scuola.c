#include <stdio.h>
#include "domande_scuola.h"
Bool domande_scuola(void) {
	char a;
	printf("Ti piace la scuola?\n[s]i' [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	printf("Sei mai stato bocciato?\n[s]i' [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	printf("Rispondi si'?\n[s]i' [n]o\n");
	scanf(" %c",&a);
	if(a=='n') return FALSE;
	return TRUE;
}
