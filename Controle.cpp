#include "Controle.h"

Controle::Controle(double val, Funcao* f) : _value(val), f(f) { cout << "(" << this << ") Controle(x)=(" << _value << ") " << endl; }

Controle::Controle() {
	cout << "(" << this << ") Controle" << endl;

}

Controle::Controle(double x, double y) : _x(x), _y(y) { 
	cout << "(" << this << ") x=(" << _x << ") " << " y=("<< _y<<")" <<  endl;
	
}

Controle::Controle(Point2D x, Point2D y) {
	
}

Controle::Controle(Funcao *f) : f(f) { }
