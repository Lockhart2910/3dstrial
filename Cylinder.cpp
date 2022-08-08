#include"cylinder.h"
Cylinder::Cylinder(double h, double r, int x, int y) : Circle(r, x, y) {
	setHieght(h);
}
void Cylinder::setHieght(double h) {
	height = (h >= 0 ? h : 0);
}
double Cylinder::getHieght()const { return height; }

double Cylinder::calculateArea()const {
	return 2 * Circle::calculateArea() +
		2 * 3.14159 * radius * height;
}
double Cylinder::calculateVolume()const {
	return Circle::calculateArea() * height;
}
void Cylinder::print() const
{
	Circle::print();
	cout << "Height: " << height << endl;
}
ostream& operator<<(ostream& out, const Cylinder& cyl) {
	out << " Centre at " << static_cast<Circle>(cyl)\
		<< " Radius as : " << cyl.radius << " Area is " << cyl.calculateArea() << " Volume is : " << cyl.calculateVolume() << endl; ;
	return out;
}