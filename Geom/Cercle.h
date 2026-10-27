#pragma once
#include"Point.h"
class Cercle
{
private:
	Point* centre;
	double rayon;
public:
	Cercle(double, Point*);
	Cercle(const Cercle& C);
	bool operator==(const Cercle& c) const;
	double operator-(const Cercle& c) const;
	void afficher() const;
	~Cercle();
};

