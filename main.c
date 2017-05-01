#include "squeue.h"
#include <stdio.h>

#define N 10

	int main(int argc, char* argv[]){

		SQueue* Fila = SQueue_create();
		
		if (Fila){
			int i;
			for (i = 0; i < N; i++)
				SQueue_insert (Fila, i+2);
			
			SQueue_print (Fila);
			puts("");

			SQueue_remove (Fila, &i);
			printf("Item removido: %d\nNova fila: ",i);

			SQueue_print (Fila);
			puts("");
		}
	}