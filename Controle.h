#include "Servomotor.h"
#include "Point2D.h"
#include "Funcao.h"


class Controle : public Point2D ,  public Servomotor, public Funcao
{
public:
	Controle(double val, Funcao* f);
	Controle();
	Controle(Funcao* f);
	Controle(double x, double y);
	Controle(Point2D x, Point2D Y); //Construtor para setar os valores das coordenadas x e y
	double operator()(double _x) {
		return (_value);
	}

private:
	double _value;
	double _x;
	double _y;
	Funcao* f;

	 
};

