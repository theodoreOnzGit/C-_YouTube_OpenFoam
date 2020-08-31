#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);
double vector_add(double vectorA[3][1],double vectorB[3][1]);

int main ()
{

	// note this only works for single dimension arrays not 2D arrays
	double l;
	double vector1[3][1];
	
	cout << "we are adding vector 1 to vector 2, they each have 3 rows and 1 col ... " << endl;
	std::cout << "vector 1 input x " << std::endl;
	std::cin >> vector1[0][0];

	std::cout << "vector 1 input y " << std::endl;
	std::cin >> vector1[1][0];

	std::cout << "vector 1 input z "<< std::endl;
	std::cin >> vector1[2][0];
	
	double vector2[3][1];
	cout << "vector 2 input x " << endl;
	cin >> vector2[0][0];

	cout << "vector 2 input y " << endl;
	cin >> vector2[1][0];

	cout << "vector 2 input z " << endl;
	cin >> vector2[2][0];


	// calc length
	// std::cout << "the length is " << std::endl;
	// l = vector_length(vector[0][0],vector[1][0],vector[2][0]);
	
	double add_result = vector_add(vector1,vector2);

	cout << "the output of the function is: " << endl;
	std::cout << add_result << std::endl;


	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

double vector_add(double vectorA[3][1], double vectorB[3][1]) // ensure you pass in arrays of this fixed size
{
	double vector_add_result[3][1];

	//vector_add_result[] = vectorA[];
	for (int i = 0 ; i < 3 ; i++) // ensure these are semicolons here!
	{
		vector_add_result[i][0] = vectorA[i][0] + vectorB[i][0]; // ensure this is vector A and B

		cout << "column " << i << " is" << endl;
		cout << vector_add_result[i][0] << endl; // prints out the result

	}	

	cout << vector_add_result << endl;

	double *a;
	a = *vector_add_result;

	return *a; // you can't return a vector here, only pointers
	
}




