
#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include"Shape.h"

int main()
{
	Point* pointPtr = 0, p(30, 50);
	Circle* circleptr = 0, c(2.7, 120, 89);
	cout << "Point p: " << p << "\n Circle c: " << c << endl;
	pointPtr = &c;
	cout << "\n Circle c (via pointer): "
		<< *pointPtr << endl;
	circleptr = static_cast<Circle*>(pointPtr);
	cout << "\nCicle c(via circleptr:\n" << *circleptr
		<< "\n are of c(via circleptr): " << circleptr->calculateArea() << endl;

	/*pointPtr = &p;
	circleptr = static_cast<Circle*>(pointPtr);
	cout << "\nCicle c(via circleptr:\n" << *circleptr//it will run but with garbage value;
		<< "\n are of c(via circleptr): " << circleptr->CalculateArea() << endl;*/

		//Cylinder cyl(2.0, 3.0, 1, 1);
		//cout << cyl;

	Point p1(2, 4);
	p1.drawshape();
	p1.print();
	cout << "Area is " << p1.calculateArea() << " And volume is " << p1.calculateVolume();
	Circle c1(2.4, 5);
	c1.print();
	cout << "Area is " << c1.calculateArea() << " And volume is " << c1.calculateVolume();
	Cylinder cy(2.0, 2.0, 3, 4);
	cy.print();
	cout << "Area is " << cy.calculateArea() << " And volume is " << cy.calculateVolume();
	Shape* shape[3] = { &p1,&c1,&cy };
	for (int i = 0; i < 3; ++i) {
		virtualViaPointer(shape[i]);
		virtualViaReference(*shape[i]);
	}
	return 0;
}

	