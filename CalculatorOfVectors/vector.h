#ifndef VECTOR_H_
#define VECTOR_H_

#include "iostream"
#include <math.h>

typedef struct {
	int x;
	int y;
	int v[2];
} vector;

void enterVectors(vector* v1, vector* v2);
void printresult(vector* c);
vector* addVector(vector* v1, vector* v2, vector* r);
vector* substractVector(vector* v1, vector* v2, vector* r);
int multiplyVector(vector* v1, vector* v2);
void mulConVector(vector* v1, vector* v2, int c);


#endif /* VECTOR_H_ */
