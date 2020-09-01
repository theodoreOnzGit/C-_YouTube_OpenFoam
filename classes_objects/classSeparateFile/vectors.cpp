#include <iostream>
#include <string>
#include <cmath>

#include "vectors.h"

using namespace std;

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



