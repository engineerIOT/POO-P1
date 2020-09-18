#include "Servomotor.h"
#include "Point2D.h"


class Controle : public Point2D ,  public Servomotor
{
public:
	Controle();
	Controle(double x, double y);
	Controle(Point2D x, Point2D Y); //Construtor para setar os valores das coordenadas x e y

private:
	double _x;
	double _y;
};

