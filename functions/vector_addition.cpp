#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//adds two vectors of any length together (these must be column or row vectors)
//
//
double vector_length(double x, double y, double z);
int 2d_arraySize[](double vector[]);

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
	
	// array size
	int vectorSize[] = int 2d_arraySize(vector);
	cout << "number of columns" << endl;
	cout << vectorSize[0] << endl;
	cout << endl;
	cout << "number of rows " << endl;
	cout << vectorSize[1] << endl;
	
	cout << sizeof(vector)/sizeof(vector[0][0]) << endl;
	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}


int 2d_arraySize[](double vector[])
{
	//let me measure the full size in bytes of the vector
	double vector_bytes = sizeof(vector[]);

	//then let me find the size of the first column
	double vector_col_bytes = sizeof(vector[0]);
	
	//let me then find how many rows there are
	double nrows = vector_bytes/vector_col_bytes;
	nrows = nrows +0.5;
	int Nrows = round(nrows);
	//now to find a row
	
	//let me find the size of a double variable (one element in this array)
	double double_bytes = sizeof(double);
	double ncols = vector_col_bytes/double_bytes;
	ncols = ncols + 0.5;
	int Ncols = round(nrows);
	int size[1][2]={{Ncols},{Nrows}};	
	return size[];
}



