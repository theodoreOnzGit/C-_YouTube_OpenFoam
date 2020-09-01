#include <iostream>
#include <string>
#include <cmath>

#include "vectors.h"

using namespace std;

int main ()
{
	Vectors vec; // importing a class into your main file, is known as creating an object
	vec.setVector1();
	vec.setVector2();
	vec.addVectors();

	vec.printAddedVectors();	
	
	double a = 1.23;
	double b = 3.45;
	double c = 2.56;

	double l = vec.vector_length(a,b,c);

	cout << "printing vector length ... " << endl;
	cout << l << endl;

	return 0;
}
