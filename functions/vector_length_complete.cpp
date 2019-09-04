#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);


int main ()
{
	double l,x,y,z;
	double vector[3][1]={{x},{y},{z}};
	

	std::cout << "input x " << std::endl;
	std::cin >> x;

	std::cout << "input y " << std::endl;
	std::cin >> y;

	std::cout << "input z "<< std::endl;
	std::cin >> z;
	
	// calc length
	//
	vector[0][0] = x;
	vector[1][0] = y;
	vector[2][0] = z;
	std::cout << "the length is " << std::endl;
	l = vector_length(vector[0][0],vector[1][0],vector[2][0]);

	std::cout << l << std::endl;


	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

