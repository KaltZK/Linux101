#ifndef _ARRAY_H
#define _ARRAY_H
#define VECTOR_LENGTH 2048

void array_fill_with(int array[VECTOR_LENGTH][VECTOR_LENGTH], int w,int h, int fillWith);
void array_print(int array[VECTOR_LENGTH][VECTOR_LENGTH], int w,int h);

void array_add(int *arrayX, int *arrayY, int *arrayZ, int length);
void array_multiply(
	int arrayX[VECTOR_LENGTH][VECTOR_LENGTH],
	int arrayY[VECTOR_LENGTH][VECTOR_LENGTH],
	int arrayZ[VECTOR_LENGTH][VECTOR_LENGTH],
	int w1,int w2,int w3);

#endif
