#include "Cercle.h"
#include <iostream>

using namespace std;

Cercle::Cercle(double r, Point* centre)
{
	this->rayon = r;
	this->centre = centre;
}

Cercle::Cercle(const Cercle& C)
{
	this->rayon = C.rayon;
	this->centre=new Point(*(C.centre));
}


bool Cercle::operator==(const Cercle& c) const {
	if (this->rayon == c.rayon && *(this->centre) == *(c.centre)) {
		return true;
	}
	
}

double Cercle::operator-(const Cercle& c) const
{
	double d;
	d=*(this->centre) - *(c.centre);
	return d;
}



void Cercle::afficher() const
{
    cout << "Le rayon est: " << this->rayon << endl;
	this->centre->afficher();
}

Cercle::~Cercle() {

}