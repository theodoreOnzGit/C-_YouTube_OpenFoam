#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Reynolds_calc(double rho, double U, double D, double mu);


int main ()
{
	double rho,U,D,mu,Re;
	

	cout << "input density in kg/m3 " << endl;
	cin >> rho;

	cout << "input velocity in m/s " << endl;
	cin >> U;

	cout << "input characteristic length in m "<< endl;
	cin >> D;

	cout << "input dynamic viscosity in SI units " << endl;
	cin >> mu;
	// calc Re
	cout << "the Re Number is " << endl;
	Re = Reynolds_calc(rho,U,D,mu);

	cout << Re << endl;


	return 0;
}

double Reynolds_calc(double rho,double U,double D,double mu)
{
	double Re;
	Re = rho*U*D/mu;
	return Re;
}

