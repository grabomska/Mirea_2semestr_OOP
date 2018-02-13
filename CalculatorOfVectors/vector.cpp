#include "vector.h"
#include "iostream"
using namespace std;

void enterVectors(double* arr1, double* arr2)
{
	cout << "Enter first vector" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> arr1[i];
	}

	cout << "Enter second vector" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> arr2[i];
	}

	cout << "First vector: (" << arr1[0] << "," << arr1[1] << ")" << endl;
	cout << "Second vector: (" << arr2[0] << "," << arr2[1] << ")" << endl;
}


void printresult(double* r)
{
	cout << "Result vector: (" << r[0] << "," << r[1] << ")" << endl;
}


double* addVector(double* v1, double* v2, double* r)
{
	for (int i = 0; i < 2; i++)
	{
		r[i] = v1[i] + v2[i];
	}

	return r;
}


double multiplyVector(double* v1, double* v2)
{
	return (v1[0]*v2[0] + v1[1]*v2[1]);
}


double* substractVector(double* v1, double* v2, double* r)
{
	for (int i = 0; i < 2; i++)
		{
			r[i] = v1[i] - v2[i];
		}

		return r;
}


void mulConVector(double* v1, double* v2, double c)
{
	for (int i = 0; i < 2; i++)
	{
		v1[i] = v1[i]*c;
		v2[i] = v2[i]*c;
	}

	cout << "First result vector: (" << v1[0] << "," << v1[1] << ")" << endl;
	cout << "Second result vector: (" << v2[0] << "," << v2[1] << ")" << endl;
}
