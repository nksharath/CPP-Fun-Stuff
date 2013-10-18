/*
circle.h        : This class provides method declarations for all overloaded operators
*@Author        : Sharath Navalpakkam Krishnan : Batch : 4003-700-01 RIT ID : sxn9447@cs.rit.edu
*@Author        : Pratik Mehta : : Batch : 4003-700-01 RIT ID : pdm5238@cs.rit.edu
*@Version       : 1.0.2
*@LastModified  : 10/29/2012 2.30 AM
*
*/
#ifndef _CIRCLE_H_
#define _CIRCLE_H_
using namespace std;
class Circle {
	//denotes radius of the circle
	double Radius;
	public :
	//Default constructor
	Circle();
	//Constructor that takes radius in.
	Circle(double r);
	//Returns the radius of the circle.
	double GetRadius();
	//Sets radius of the circle.
	void SetRadius(double r);
	//Calculates area of the circle
	double CalculateArea();
	//Calculates the perimeter of the circle
	double CalculatePerimeter();
	//Returns true is this circle object is less than the passed object
	bool operator<(Circle c1);
	//Returns true is this circle object is less than or equal to the passed object
	bool operator<=(Circle c1);
	//Returns true is this circle object is equal to the passed object
	bool operator==(Circle c1);
	//Returns true is this circle object is not equal to the passed object
	bool operator!=(Circle c1);
	//Returns true is this circle object is greater than or equal to the passed object
	bool operator>=(Circle c1);
	//Returns true is this circle object is greater than the passed object
	bool operator>(Circle c1);
};
#endif
