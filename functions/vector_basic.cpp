#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//double vector_length(double x, double y, double z);
double vector_add(double vectorA[3][1],double vectorB[3][1]);

int main ()
{
	//double l;
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
	cout << vector1 << endl;	
	double add_result(vector1,vector2);



	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

double vector_add(double vectorA[3][1],double vectorB[3][1])
	//https://stackoverflow.com/questions/30541367/c-cannot-convert-double-to-double-for-argument-1-to-void-sortdouble-in
	//https://www.youtube.com/watch?v=B3iC40frU4M&list=PLAE85DE8440AA6B83&index=36
{
	double vector_add_result[3][1];

	//vector_add_result[] = vectorA[];
	for (int i = 0; i < 3; i++)
	{
		vector_add_result[i][0] = vectorA[i][0]+vectorB[i][0];
		cout << "row " << i+1 << "has a value of ";
		cout << vector_add_result[i][0] << endl;
	}	

	return 0;
	
}


