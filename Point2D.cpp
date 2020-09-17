#include "Point2D.h"

Point2D::Point2D() { 
	xVal = 0.0;
	yVal = 0.0;
}

Point2D::Point2D(double x, double y) {
	xVal = x;
	yVal = y;
}

void Point2D::setX(double x) { 
	xVal = x; 
}
void Point2D::setY(double y) { 
	yVal = y; }

double Point2D::x() const {
	return xVal;
}

double Point2D::y() const {
	return yVal;
}

void Point2D::testePoint2D() {

	Point2D alpha;
	Point2D beta;
	Point2D* ptr;

	double x1 = 1.1;
	double y1 = 2.5;
	Point2D(x1, y1);


	ptr = &alpha;
	ptr->setX(x1);
	ptr->setY(y1);


	double x2 = 5.3;
	double y2 = 6.5;
	Point2D(x2, y2);

	ptr = &beta;
	ptr->setX(x2);
	ptr->setY(y2);

	cout << "Endereco:" << &alpha << " x1:" << x1 << "" << " y1:" << y1 << endl;
	cout << "Endereco:" << &beta << " x2:" << x2 << "" << " y2:" << y2 << endl;

	ptr = 0;
}