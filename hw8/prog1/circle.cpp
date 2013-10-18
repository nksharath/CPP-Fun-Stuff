/*
circle.cpp      : This class provides method definitions for all overloaded operators and provides main functions with test cases
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/29/2012 2.30 AM
*
*/
#include <iostream>
#include "circle.h"
using namespace std;
//Constant PI value that can be used.
const double PI = 3.142;
//Default Circle Constructor
Circle::Circle() {
}
//Circle Contructor that take radius as parameter
Circle::Circle(double r) {
	Radius = r;
}
//Returns radius of circle
double Circle::GetRadius() {
	return Radius;
}
//Sets radius of the circle
void Circle::SetRadius(double r) {
	Radius = r;
}
//return area of the circle
double Circle::CalculateArea() {
	return PI*Radius*Radius;
}
//returns perimeter of the circle
double Circle::CalculatePerimeter() {
	return 2*PI*Radius;
}
//if this circle objects radius is smaller than the circle object passed, returns true.
bool Circle::operator<(Circle c1) {
	if(this->Radius < c1.Radius)
		return 1;
	return 0;
}
//if this circle objects radius is smaller or equal to the circle object passed, returns true.
bool Circle::operator<=(Circle c1) {
	if(this->Radius <= c1.Radius)
		return 1;
	return 0;
}
//if this circle objects radius is equal to the circle object passed, returns true.
bool Circle::operator==(Circle c1) {
	if(this->Radius == c1.Radius)
		return 1;
	return 0;
}

//if this circle objects radius is not equal to the circle object passed, returns true.
bool Circle::operator!=(Circle c1) {
	if(this->Radius != c1.Radius)
		return 1;
	return 0;
}
//if this circle objects radius is greater than or equal to the circle object passed, returns true.
bool Circle::operator>=(Circle c1) {
	if(this->Radius >= c1.Radius)
		return 1;
	return 0;
}
//if this circle objects radius is greater than the circle object passed, returns true.
bool Circle::operator>(Circle c1) {
	if(this->Radius > c1.Radius)
		return 1;
	return 0;
}
// Main function that test all operators.
int main() {
	Circle c1(4);
	Circle c2(5);
	//Using '<' to compare
	if(c1 < c2) {
		cout << "Circle c1 is smaller than circle c2" << endl;
	} else {
		cout << "Circle c1 is greater than c2" << endl;
	}
	//Using '>' to compare
	if(c2 > c1) {
		cout << "Circle c2 is greater than circle c1" << endl;
	} else {
		cout << "Circle c2 is smaller than c1" << endl;
	}
	c1.SetRadius(5);
	//Using '<=' to compare
	if(c1 <= c2) {
		cout << "Circle c1 is smaller than or equal to circle c2" << endl;
	} else {
		cout << "Circle c1 is greater than c2" << endl;
	}
	c1.SetRadius(1);
	//Using '>=' to compare
	if(c2 >= c1) {
		cout << "Circle c2 is greater than or equal to circle c1" << endl;
	} else {
		cout << "Circle c2 is smaller than c1" << endl;
	}
	//Using '==' to compare
	c2.SetRadius(1);
	if(c1 == c2) {
		cout << "Circle c1 is equal to circle c2" << endl;
	} else {
		cout << "Circle c1 is not equal to c2" << endl;
	}
	//Using '!=' to compare
	c1.SetRadius(2.2);
	if(c1 != c2) {
		cout << "Circle c1 is not equal to c2" << endl;
	} else {
		cout << "Circle c1 is equal to c2" << endl;
	}
}
