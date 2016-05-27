#include <stdio.h>
#include <string.h>

#include "include/array.h"

void array_fill_with(int array[VECTOR_LENGTH][VECTOR_LENGTH], int w,int h, int fillWith) {
	int i,j;
	for (i = 0; i < w; i++) {
		for(j=0;j<h;j++)
			array[i][j] = fillWith;
	}
}

void array_add(int *arrayX, int *arrayY, int *arrayZ, int length) {
	int i;
	for (i = 0; i < length; i++) {
		arrayZ[i] = arrayX[i] + arrayY[i];
	}
}

void array_multiply(
	int arrayX[VECTOR_LENGTH][VECTOR_LENGTH],
	int arrayY[VECTOR_LENGTH][VECTOR_LENGTH],
	int arrayZ[VECTOR_LENGTH][VECTOR_LENGTH],
	int w1,int w2,int w3){
	int i,j,k;
	memset(arrayZ,0,sizeof(int[w1][w3]));
	for(i=0;i<w1;i++)
		for(j=0;j<w2;j++)
			for(k=0;k<w3;k++)
				arrayZ[i][k]+=arrayX[i][j]*arrayY[j][k];
}

void array_print(int array[VECTOR_LENGTH][VECTOR_LENGTH], int w,int h) {
	int i,j;
	for(i=0;i<w;i++){
		for (j=0;j<h;j++) {
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	puts("...");
}
