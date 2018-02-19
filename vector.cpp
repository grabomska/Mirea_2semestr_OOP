#include "vector.h"
#include "iostream"
using namespace std;

void enterVectors(vector* v1, vector* v2)
{
	cout << "Enter first vector" << endl;
	cin >> v1->x >> v1->y;

	cout << "Enter second vector" << endl;
	cin >> v2->x >> v2->y;

	cout << "First vector: ("<< v1->v[0] << ", " << v1->v[1] << ")" << endl;
	cout << "Second vector: ("<< v2->v[0] << ", " << v2->v[1] << ")" << endl;
}


void printresult(vector* r)
{
	cout << "Result vector: (" << r->v[0] << "," << r->v[1] << ")" << endl;
}


int* addVector(vector* v1, vector* v2, vector* r)
{
	for (int i = 0; i < 2; i++)
	{
		r[i] = v1->v[i] + v2->v[i];
	}

	return r;
}


int multiplyVector(vector* v1, vector* v2)
{
	return (v1[0]*v2[0] + v1[1]*v2[1]);
}


int* substractVector(vector* v1, vector* v2, vector* r)
{
	for (int i = 0; i < 2; i++)
		{
			r[i] = v1[i] - v2[i];
		}

		return r;
}


void mulConVector(vector* v1, vector* v2, int c)
{
	for (int i = 0; i < 2; i++)
	{
		v1[i] = v1[i]*c;
		v2[i] = v2[i]*c;
	}

	cout << "First result vector: (" << v1[0] << "," << v1[1] << ")" << endl;
	cout << "Second result vector: (" << v2[0] << "," << v2[1] << ")" << endl;
}

