#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Reynolds_calc(double rho, double U, double D, double mu);


int main ()
{
	double rho,U,D,mu,Re;
	

	std::cout << "input density in kg/m3 " << std::endl;
	std::cin >> rho;

	std::cout << "input velocity in m/s " << std::endl;
	std::cin >> U;

	std::cout << "input characteristic length in m "<< std::endl;
	std::cin >> D;

	std::cout << "input dynamic viscosity in SI units " << std::endl;
	std::cin >> mu;
	// calc Re
	std::cout << "the Re Number is " << std::endl;
	Re = Reynolds_calc(rho,U,D,mu);

	std::cout << Re << std::endl;


	return 0;
}

double Reynolds_calc(double rho,double U,double D,double mu)
{
	double Re;
	Re = rho*U*D/mu;
	return Re;
}

