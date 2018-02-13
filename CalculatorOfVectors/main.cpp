#include "vector.h"
using namespace std;


int main()
{
		double v1[2], v2[2], resv[2];
		double res, c;
		char op;
		cout << "Enter vectors" << endl;
		enterVectors(v1, v2);
		cout << "Enter operation" << endl;
		cin >> op;
		switch (op) {
		case '+':
			addVector(v1, v2, resv);
			break;

		case '-':
			substractVector(v1, v2, resv);
			break;

		case 'c':
			cout << "Enter constant" << endl;
			cin >> c;
			mulConVector(v1, v2, c);
			return 0;

		case '*':
			res = multiplyVector(v1, v2);
			cout << "Result: " << res;
			return 0;

		default:
			cout << "Error";
		}

		printresult(resv);

		return 0;
}



