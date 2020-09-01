#include <iostream>
#include <string>
#include <cmath>

#include "vectors.h"

using namespace std;

int main ()
{
	// create an object now...
	//
	
	Vectors vec;	
	vec.setVector1();
	vec.setVector2();

	vec.addVectors();
	vec.printVectorSum();


	cout << "vector 1 length is:" << endl;
	vec.vector1_length();

	double l = vec.getVector1Length();

	cout << l << endl;


	return 0;
}

