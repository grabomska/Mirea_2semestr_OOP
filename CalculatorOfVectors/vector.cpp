#include "vector.h"
#include "iostream"
using namespace std;

void enterVectors(vector* v1, vector* v2)
{
	cout << "Enter first vector" << endl;
	cin >> v1->x >> v1->y;
	v1->v[0] = v1->x;
	v1->v[1] = v1->y;

	cout << "Enter second vector" << endl;
	cin >> v2->x >> v2->y;
	v2->v[0] = v2->x;
	v2->v[1] = v2->y;

	cout << "First vector: ("<< v1->v[0] << ", " << v1->v[1] << ")" << endl;
	cout << "Second vector: ("<< v2->v[0] << ", " << v2->v[1] << ")" << endl;
}


void printresult(vector* r)
{
	cout << "Result vector: (" << r->v[0] << "," << r->v[1] << ")" << endl;
}


vector* addVector(vector* v1, vector* v2, vector* r)
{

	for (int i = 0; i < 2; i++)
	{
		r->v[i] = v1->v[i] + v2->v[i];
	}

	return r;
}


int multiplyVector(vector* v1, vector* v2)
{
	int r;
	cout << "result = " << v1->v[0] << " * " << v2->v[0] << " + " << v1->v[1] << " * " << v2->v[1] << endl;
	r = (int)(v1->v[0]*v2->v[0] + v1->v[1]*v2->v[1]);
	return r;
}


vector* substractVector(vector* v1, vector* v2, vector* r)
{
	for (int i = 0; i < 2; i++)
	{
		r->v[i] = v1->v[i] - v2->v[i];
	}

	return r;
}


void mulConVector(vector* v1, vector* v2, int c)
{
	for (int i = 0; i < 2; i++)
	{
		v1->v[i] = v1->v[i]*c;
		v2->v[i] = v2->v[i]*c;
	}

	cout << "First result vector: (" << v1->v[0] << "," << v1->v[1] << ")" << endl;
	cout << "Second result vector: (" << v2->v[0] << "," << v2->v[1] << ")" << endl;
}
