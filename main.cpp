//Richshard Parnell        J00964332           11/09/2022
//                             Quadratic Equation
//November 9, 2022
//This program shows the roots of the quadratic equation
#include <iostream>

#include <cmath>

using namespace std;

int main()

{

	double a;

	double b;

	double c;

	double disc;

	cout << "Give the coefficient of x^2:" << endl;

	cin >> a;

	cout << "Give the coefficient of x:" << endl;

	cin >> b;

	cout << "Give the constant term:" << endl;

	cin >> c;

	disc = pow(b, 2) - (4 * a * c);

	if (disc > 0)

		cout << "The equation has two real roots." << endl;


	else if (disc < 0)

		cout << "The equation has two complex roots." << endl;


	else (disc == 0)
		cout << "The equation has a single root.";

}
