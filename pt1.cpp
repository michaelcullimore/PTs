//Michael Cullimore
//Sample PT

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double i1 = 0.0;
	double i2 = 0.0;
	double n1 = 0.0;
	double n2 = 0.0;

	cout << "This program calculates a given equation." << endl;
	cout << "i2 = (((1 + (i1 / n1) ^ (n1 / n2)) - 1) * n2" << endl << endl;
	
	cout << "Please enter a value for i1: "; cin >> i1; cout << endl;

	cout << "Please enter a value for n1: "; cin >> n1; cout << endl;

	cout << "Please enter a value for n2: "; cin >> n2; cout << endl;

	i2 = (pow ((1 + (i1 / n1)), (n1 / n2)) - 1) * n2;

	cout << "i2 = " << i2 << endl;
	cout << i2 << " = (((1 + (" << i1 << " / " << n2 << ") ^ (" << n1 << " / " << n2 << ")) - 1) * " << n2 << endl << endl;

	return 0;
}