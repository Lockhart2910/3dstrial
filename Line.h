#pragma once
#include"point.h"
#include<iostream>
using namespace std;

class Line {
public:
	Line(int ,int );
	~Line();
private:
	Point* start;
	Point* end;

};