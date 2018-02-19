#ifndef VECTOR_H_
#define VECTOR_H_

#include "iostream"
#include <math.h>

typedef struct vector {
	int x;
	int y;
	int v[2] = {x, y};
};

void enterVectors(vector* v1, vector* v2);
void printresult(vector* c);
double* addVector(vector* v1, vector* v2, vector* r);
double* substractVector(vector* v1, vector* v2, vector* r);
double multiplyVector(vector* v1, vector* v2);
void mulConVector(vector* v1, vector* v2, int c);


#endif /* VECTOR_H_ */
