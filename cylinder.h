#pragma once
#include"circle.h"
#include"point.h"
class Cylinder :public Circle {
	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double = 0, double = 0, int = 0, int = 0);
	void setHieght(double r);
	double getHieght() const;
	virtual double calculateArea() const;
	virtual double calculateVolume()const;
	virtual void printShapeName() const { cout << "Cylinder: "; }
	virtual void print() const;
protected:
	double height;
};