#include "Controle.h"

Controle::Controle() {
	cout << "(" << this << ") Controle" << endl;

}

Controle::Controle(double x, double y) : _x(x), _y(y) { 
	cout << "(" << this << ") x=(" << _x << ") " << " y=("<< _y<<")" <<  endl;
	
}

Controle::Controle(Point2D x, Point2D y) {
	
}
