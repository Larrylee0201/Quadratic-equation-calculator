//Side project
//Autors: Larry Lee
//Date: 4/25/2024
//Description: This program is tp solve the Quadratic equation.

#include <iostream>
#include <cmath>

using namespace std;

//Function prototypes
double a;
double b;
double c;

//Function to solve the quadratic equation answers
double x1;
double x2;

//funtion to solve the quadratic equation vertex
double h;
double k;

//function to solve the quadratic equation axis of symmetry
void solve(double &x1, double &x2);
//function to solve the quadratic equation vertex
void vertex(double &h, double &k);

int main() {
	cout << "The format will be like ax^2 + bx + c = 0" << endl;

	cout << "\nPlease enter the value of a: ";
	cin >> a;
	cout << "Please enter the value of b: ";
	cin >> b;
	cout << "Please enter the value of c: ";
	cin >> c;

	solve(x1, x2); //call function solve()
	cout << "\nThe value of x1 is: " << x1 << endl << "The value of x2 is : " << x2 << endl;
	
  	vertex(h, k);//call function vertex()
	cout << "\nThe vertex of h is: " << h << endl << "The value of k is : " << k << endl;
	
}

//function solve()
void solve(double &x1, double &x2){
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
}

//function vertex()
void vertex(double &h, double &k){
	h = -b/(2*a);
	k = a*h*h+b*h+c;
}
