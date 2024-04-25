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

//Function to solve the quadratic equation
double x1;
double x2;

void solve(double &x1, double &x2);

int main() {
	
  cout << "Please enter the value of a: ";
  cin >> a;
  cout << "Please enter the value of b: ";
  cin >> b;
  cout << "Please enter the value of c: ";
  cin >> c;

  solve(x1, x2); //call function solve()
  cout << "\nThe value of x1 is: " << x1 << endl << "The value of x2 is : " << x2 << endl;
	
}

//function solve()
void solve(double &x1, double &x2){
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	
}