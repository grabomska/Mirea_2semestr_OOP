#include "Vector.h"
#include <iostream>

using namespace std;


int main()
{
		Vector v1;
		Vector v2;
		int c, res;
		char op;
		cout << "Enter first vector" << endl;
		v1.setVector();
		cout << "Enter second vector" << endl;
		v2.setVector();
		cout << "Enter operation (+, -, *, c - multiply on constant)" << endl;
		cin >> op;
		switch (op) {
		case '+':
			v1 = v1.addVector(v1, v2);
			v1.getVector();
			break;

		case '-':
			v1 = v1.substraktVector(v1, v2);
			v1.getVector();
			break;

		case 'c':
			cout << "Enter constant" << endl;
			cin >> c;
			v1.multiplyConstantVector(v1, v2, c);
			break;

		case '*':
			res = v1.multiplyVector(v1, v2);
			cout << "Result: " << res;
			break;

		default:
			cout << "Error";
			break;
		}

		return 0;
}

