#ifndef SQUEUE_H
#define SQUEUE_H
#define N 10

typedef struct {
	int in, out;
	int dados[N];
}SQueue;

SQueue* SQueue_create ();

int SQueue_insert (SQueue* , int );

int SQueue_remove (SQueue* , int* );

void SQueue_print(SQueue* );


#endif //SQUEUE_H