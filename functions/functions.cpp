#include <iostream>

using namespace std;

void Reynolds(double rho,double U,double mu,double D);

int main()
{
	double rho, U, mu, D;
	cout << "We're going to calculate a Reynolds Number" << endl;
	cout << "Please specify the velocity in m/s" << endl;                               cout << endl;                                                                       cin >> U;

        cout << "Please specify the density in kg/m3" << endl;                              cout << endl;
      	cin >> rho;
	cout << endl;

	cout << "Please Specify the dynamic viscosity in SI units" << endl;
	cout << endl;
	cin >> mu;
	cout << endl;

	cout << "please Specify the characteristic length in SI units" << endl;
	cout << endl;
	cin >> D;
	cout << endl;	
		
	cout << " and the Reynolds number is .... " << endl;
	Reynolds(rho, U , mu, D);
	return 0;
}

void Reynolds(double rho,double U,double mu,double D)
{
	cout << (rho*U*D)/mu << endl;

}

