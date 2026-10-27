#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point(double, double);
	bool operator==(const Point&) const;
	double operator-(const Point&) const;
	void deplacer(double, double);
	
	void afficher() const;
	~Point();
};

