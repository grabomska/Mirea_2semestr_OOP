#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
public:
	// constructor of vector
	Vector();
	// destructor of vector
	~Vector();

	void setVector();
	void getVector();

	Vector addVector(Vector, Vector);
	int multiplyVector(Vector, Vector);
	Vector substraktVector(Vector, Vector);
	void multiplyConstantVector(Vector, Vector, int);


private:
	int x;
	int y;
};

#endif /* VECTOR_H_ */
