#include "Vector.h"
#include <iostream>

Vector::Vector() {
	x = 0;
	y = 0;
}

Vector::~Vector(){

}

void Vector::setVector() {
		std::cin >> x >> y;
}

void Vector::getVector() {
	std::cout << "Result vector: (" << x << ", " << y << ")" << std::endl;
}

Vector Vector::addVector(Vector v1, Vector v2) {
	v1.x += v2.x;
	v1.y += v2.y;
	return v1;
}

int Vector::multiplyVector(Vector v1, Vector v2) {
	int r;
	std::cout << "result = " << v1.x << " * " << v2.x << " + " << v1.y << " * " << v2.y << std::endl;
	r = (int)(v1.x*v2.x + v1.x*v2.x);
	return r;
}

Vector Vector::substraktVector(Vector v1, Vector v2) {
	v1.x -= v2.x;
	v1.y -= v2.y;
	return v1;
}

void Vector::multiplyConstantVector(Vector v1, Vector v2, int c) {
	v1.x *= c;
	v1.y *= c;
	v2.x *= c;
	v2.y *= c;

	std::cout << "First result vector: (" << v1.x << "," << v1.y << ")" << std::endl;
	std::cout << "Second result vector: (" << v2.x << "," << v2.y << ")" << std::endl;
}

