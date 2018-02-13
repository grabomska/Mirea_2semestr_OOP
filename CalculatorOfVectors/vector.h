#ifndef VECTOR_H_
#define VECTOR_H_

#include "iostream"
#include <math.h>

void enterVectors(double* arr1, double* arr2);
void printresult(double* c);
double* addVector(double* v1, double* v2, double* r);
double* substractVector(double* v1, double* v2, double* r);
double multiplyVector(double* v1, double* v2);
void mulConVector(double* v1, double* v2, double c);


#endif /* VECTOR_H_ */
