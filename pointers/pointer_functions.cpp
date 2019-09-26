#include<iostream>
using namespace std;

int main(){

	double vector[3][1];
	vector[0][0]=1;
	vector[1][0]=2;
	vector[2][0]=3;
	// so we've just defined a vector
	
	cout << vector[0][0] << " this is the first value" << endl;
	cout << vector[1][0] << " this is the second value" << endl;
	cout << vector[2][0] << " this is the third value" << endl;
	
	cout << vector << " this is the pointer address" << endl;

	cout << endl;
	cout << "let's play with individual pointers first" << endl;

	double a;
	a=1;
	cout << &a << endl;
	cout << "The above prints the individual address of a." << endl;


	cout << "now we want to play with pointer variables" << endl;
	double * pointerA;
	pointerA = &a;
	cout << pointerA << " This is the value of pointerA, which we just declared " << endl;
	cout << endl;
	cout << "Now we want to print out the value of pointerA." << endl;

	cout << *pointerA << endl;
	cout << "pointerA value is stated above..." << endl;
	
		
	cout << "credits to: http://www.cplusplus.com/doc/tutorial/pointers/" << endl;
//https://www.geeksforgeeks.org/return-local-array-c-function/

	return 0;
}

