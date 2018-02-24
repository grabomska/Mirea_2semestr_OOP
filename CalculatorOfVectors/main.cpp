#include "vector.h"
using namespace std;


int main()
{
		vector v1, v2, resv;
		int c, res;
		char op;
		cout << "Enter vectors" << endl;
		enterVectors(&v1, &v2);
		cout << "Enter operation (+, -, *, c - multiply on constant)" << endl;
		cin >> op;
		switch (op) {
		case '+':
			addVector(&v1, &v2, &resv);
			printresult(&resv);
			break;

		case '-':
			substractVector(&v1, &v2, &resv);
			printresult(&resv);
			break;

		case 'c':
			cout << "Enter constant" << endl;
			cin >> c;
			mulConVector(&v1, &v2, c);
			break;

		case '*':
			res = multiplyVector(&v1, &v2);
			cout << "Result: " << res;
			break;

		default:
			cout << "Error";
			break;
		}

		return 0;
}
