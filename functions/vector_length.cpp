#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);


int main ()
{
	double l;
	double vector[3][1];
	

	std::cout << "input x " << std::endl;
	std::cin >> x;

	std::cout << "input y " << std::endl;
	std::cin >> y;

	std::cout << "input z "<< std::endl;
	std::cin >> z;
	
	vector[3][1]={{x},{y},{z}};
	// calc length
	std::cout << "the length is " << std::endl;
	l = vector_length(x,y,z);

	std::cout << l << std::endl;


	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

