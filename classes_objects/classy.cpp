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

		double vector1_length();
		double getVector1Length();

	protected:
	private:
		double 	vector1[3][1];
		double 	vector2[3][1];
		double	vectorSum[3][1];
		double	vectorLength;

};


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







double Vectors::vector1_length()
{
	
	double l;
	l = sqrt(pow(vector1[0][0],2.0)+pow(vector1[1][0],2.0)+pow(vector1[2][0],2.0));
	vectorLength = l;
	return l;
}

double Vectors::getVector1Length()
{
	return vectorLength;

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



