#ifndef POINT2D_H 
#define POINT2D_H

using namespace std;
#include <iostream>

class Point2D
{
public: 
	Point2D();
	Point2D(double x, double y);
	void setX(double x);
	void setY(double y);
	double x() const;
	double y() const; 
	void testePoint2D();

private: 
	double xVal;
	double yVal;
	
};

#endif //POINT2D_H