#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double vector_length(double x, double y, double z);
double vector_add(double vectorA[],double vectorB[]);

// this part is the class

class Vectors
{
	public:
		Vectors();
	// use public functions to access private variables, 
	// https://www.w3schools.com/cpp/cpp_encapsulation.asp
	// https://www.youtube.com/watch?v=jTS7JTud1qQ&list=PLAE85DE8440AA6B83&index=13
		void setVector1();
		int printVector1();

		void setVector2();
		int printVector2();

		void 	addVectors();
		int	printVectorSum();

	protected:
	private:
		double 	vector1[3][1];
		double 	vector2[3][1];
		double	vectorSum[3][1];

};


int main ()
{
/*
	// note this only works for single dimension arrays not 2D arrays
	double l;
	double vector1[3];
	
	cout << "we are adding vector 1 to vector 2, they each have 3 rows and 1 col ... " << endl;
	std::cout << "vector 1 input x " << std::endl;
	std::cin >> vector1[0];

	std::cout << "vector 1 input y " << std::endl;
	std::cin >> vector1[1];

	std::cout << "vector 1 input z "<< std::endl;
	std::cin >> vector1[2];
	
	double vector2[3];
	cout << "vector 2 input x " << endl;
	cin >> vector2[0];

	cout << "vector 2 input y " << endl;
	cin >> vector2[1];

	cout << "vector 2 input z " << endl;
	cin >> vector2[2];


	// calc length
	// std::cout << "the length is " << std::endl;
	// l = vector_length(vector[0][0],vector[1][0],vector[2][0]);
	
	double add_result = vector_add(vector1,vector2);

	cout << "the output of the function is: " << endl;
	std::cout << add_result << std::endl;
*/
	// create an object now...
	//
	
	Vectors vec;	
	vec.setVector1();
	vec.setVector2();

	vec.addVectors();
	vec.printVectorSum();


	return 0;
}







double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

void Vectors::addVectors() // ensure you pass in arrays of this fixed size
{
	for (int i = 0 ; i < 3 ; i++) // ensure these are semicolons here!
	{
		vectorSum[i][0] = vector1[i][0] + vector2[i][0]; // ensure this is vector A and B
	}	

	
}

int Vectors::printVectorSum() // ensure you pass in arrays of this fixed size
{
        for (int i = 0 ; i < 3 ; i++) // ensure these are semicolons here!
        {
                cout << "column " << i << " is for Vector sum" << endl;
                cout << vectorSum[i][0] << endl; // prints out the result

        }


        return 0;


}

// now here are the functions (a.k.a methods) of the classes
// https://www.w3schools.com/cpp/cpp_class_methods.asp

Vectors::Vectors() // syntax is class:function()
{
	cout << "vector class starting..." << endl;
}

// note the syntax here!
void Vectors::setVector1()
{

        std::cout << "vector 1 input x " << std::endl;
        std::cin >> vector1[0][0];

        std::cout << "vector 1 input y " << std::endl;
        std::cin >> vector1[1][0];

        std::cout << "vector 1 input z "<< std::endl;
        std::cin >> vector1[2][0];
	
}

int Vectors::printVector1()
{
// just prints out vector1
        for (int i = 0 ; i < 3 ; i++) // ensure these are semicolons here!
        {
                cout << "column " << i << " is for Vector 1" << endl;
                cout << vector1[i][0] << endl; // prints out the result

        }


	return 0;
}
// working with vectors in C++
// https://www.journaldev.com/39081/return-array-in-c-plus-plus-function


void Vectors::setVector2()
{

        std::cout << "vector 1 input x " << std::endl;
        std::cin >> vector2[0][0];

        std::cout << "vector 1 input y " << std::endl;
        std::cin >> vector2[1][0];

        std::cout << "vector 1 input z "<< std::endl;
        std::cin >> vector2[2][0];

}

int Vectors::printVector2()
{
// just prints out vector2
        for (int i = 0 ; i < 3 ; i++) // ensure these are semicolons here!
        {
                cout << "column " << i << " is for Vector 2" << endl;
                cout << vector2[i][0] << endl; // prints out the result

        }


        return 0;
}



