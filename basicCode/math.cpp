// A hello world program in C++
#include<iostream>
#include<string>
using namespace std;

int main()
	{
	float a,b;
	string first_statement,second_statement,third_statement;

	first_statement =  "now we're going to add a + b";
	second_statement = "please state a value for a:   ";
	third_statement = "please state a value for b:   ";

	cout << first_statement << endl;
	cout << second_statement;
	cin >> a;
	cout << third_statement ;
	cin >> b;
	cout << a+b << endl;
	cout << 9*9 << endl;
	return 0;
	}

// credit: https://www.codingunit.com/cplusplus-tutorial-first-cplusplus-program-hello-world
