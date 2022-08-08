#include "circle.h"

const double PI = 3.14159;
Circle::Circle(double r, int x, int y) : Point(x, y) {
	setRadius(r);
}
void Circle::setRadius(double r) {
	radius = (r > 0) ? r : 0;

}
double Circle:: getRadius() const{
	return radius;

}
double Circle::calculateArea() const {
	return PI * radius * radius;
}
void Circle::print() const
{
	Point::print();
	cout << "Radius : " << radius << endl;
}
ostream& operator<<(ostream& out, const Circle& c) {
	out << "Centre at " << static_cast<Point>(c)\
		<< "Radius as : " << c.radius << " Area is "<<c.calculateArea()<<endl;
	return out;
}

void foo() {
	cout << "For Git\n";
}