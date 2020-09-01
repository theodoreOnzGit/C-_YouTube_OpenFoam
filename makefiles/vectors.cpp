#include <iostream>
#include <string>
#include <cmath>

#include "vectors.h"

using namespace std;

double Vectors::vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return l;
}

void Vectors::addVectors()
{

	//vector_add_result[] = vectorA[];
	for (int i = 0; i < 3; i++)
	{
		vector_add_result[i][0] = vector1[i][0] + vector2[i][0];
	}	

	
}


Vectors::Vectors(){

	// initialise vector1 = zeros(3,1)
	cout << "initialising the vectors ..." << endl;	
	for (int i = 0 ; i < 3 ; i++)
	{
		vector1[i][0] = 0;
		vector2[i][0] = 0;
	}
	
}

Vectors::~Vectors(){

	cout << "end of object, destructor running ... " << endl;

}


int Vectors::printVector1(){

	cout << "we are starting to print our vectors..." << endl;
	
        for (int i = 0; i < 3; i++)
        {
		cout << "vector 1 row " << i << " column " << "1 is ... " << endl;
                cout << vector1[i][0] << endl;
        }


	return 0;
}


int Vectors::printVector2(){

        cout << "we are starting to print our vectors..." << endl;

        for (int i = 0; i < 3; i++)
        {
                cout << "vector 2 row " << i << " column " << "1 is ... " << endl;
                cout << vector2[i][0] << endl;
        }


        return 0;
}

int Vectors::printAddedVectors(){

        cout << "we are printing our added vectors..." << endl;

        for (int i = 0; i < 3; i++)
        {
                cout << "vector sum row " << i << " column " << "1 is ... " << endl;
                cout << vector_add_result[i][0] << endl;
        }


        return 0;
}


void Vectors::setVector1(){

        std::cout << "vector 1 input x " << std::endl;
        std::cin >> vector1[0][0];

        std::cout << "vector 1 input y " << std::endl;
        std::cin >> vector1[1][0];

        std::cout << "vector 1 input z "<< std::endl;
        std::cin >> vector1[2][0];



}

void Vectors::setVector2(){

        cout << "vector 2 input x " << endl;
        cin >> vector2[0][0];

        cout << "vector 2 input y " << endl;
        cin >> vector2[1][0];

        cout << "vector 2 input z " << endl;
        cin >> vector2[2][0];


}


