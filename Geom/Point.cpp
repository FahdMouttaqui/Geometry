#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(double x1, double y1) {
	this->x = x1;
	this->y = y1;
}
bool Point::operator==(const Point& p) const {
	return(this->x == p.x && this->y==p.y);
}

double Point::operator-(const Point& p) const
{
	double d;
	d = sqrt(pow((p.x - this->x), 2) + pow((p.y - this->y), 2));
	return d;
}

void Point::afficher() const {
	cout << "(x=" << this->x << "y=" << this->y << ")" << endl;
}

Point::~Point() {

}
