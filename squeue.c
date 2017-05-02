#include "squeue.h"
#include <stdlib.h>
#include <stdio.h>
#define N 10

	SQueue* SQueue_create (){
		SQueue* novo = (SQueue*) malloc (sizeof(SQueue));

		if (novo){
			novo -> in = -1;
			novo -> out = -1;
		}return (novo);
	}

	int SQueue_insert (SQueue* F, int dado){

		if((F -> in + 1) % N != F -> out){
			F -> in = (F -> in + 1)%N;
			F -> dados [F -> in] = dado;
			F -> out = (F -> out == -1)? 0: F -> out;
			return 1;
		}else{
	        puts("Queue Overflow");
	        return (0);
		}
	}

	int SQueue_remove(SQueue* F, int* dado){
	
		if (F -> out >= 0){
			*dado = F -> dados [F -> out];
			F -> out = (F -> out + 1) % N;
			
			if(F -> out > F-> in){
				F -> in = -1;
				F -> out = -1;
			}
			return (1);
		}else
			puts("Fila vazia");
		return (0);
	}

	void SQueue_print (SQueue* F){
		int i;
		for(i = F -> out; i != F -> in; i = (i+1) % N)
			printf("%d ", F -> dados[i]);
	}

	void SQueue_print2 (SQueue* F){
		int i;
		for(i = F -> out; i != F -> in; i = (i+1) % N)
			printf("%d ", F -> dados[i]);
	}