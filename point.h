#pragma once
#include"Shape.h"
#include<iostream>
using namespace std;
class Point : public Shape{
	friend ostream& operator<<(ostream&, const Point&);
public:
	Point(int = 0, int = 0);
	void setPoint(int,int);
	int getx()const { return x; }
	int gety()const { return y; }
	virtual void drawshape()const { cout << "Point : "; }
	virtual void print() const;

	
protected:
	
	int x;
	int y;

};