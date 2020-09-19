#include "Point2D.h"
#include "Servomotor.h"
#include "SensorFimDeCurso.h"
#include "Controle.h"


int main() {

	SensorFimDeCurso sensor_x1(1);
	//cout << "(" << &sensor_x1 << ") SensorFimDeCurso=(" << sensor_x1.getValue(sensor_x1) << ") " << endl;
	SensorFimDeCurso sensor_x2(1);
	SensorFimDeCurso sensor_y1(1);
	SensorFimDeCurso sensor_y2(1);
	SensorFimDeCurso sensor_cortador(1);
	
	double x1 = 0;	//atribuindo valor para x1
	double y1 = 0;	//atribuindo valor para y1
	Point2D(x1, y1);	//atribuindo valor para o construtor
	Controle(x1, new Controle(5,5));

	//cout << "(" << &sensor_x1 << ") SensorFimDeCurso=(" << sensor_x1.getValue(sensor_x1) << ") " << endl;
	//Controle a(1, new Point2D(x1, y1)); //a(x) = 1x^2

	//Controle origem(x1, x1);
	
	
	//Point2D origem(x1,y1);

	/*
	Controle d(Point2D x, Point2D y);

	Controle a(5, 5);
	Controle b(7, 8);
	Controle c(9, 10);
	*/

	//1. criar instancia para dois objetos
	//2. criar ponteiro
	//3. atribuir valor
	//4. printar
	//5. zerar ponteiro

	/*Point2D testepoint2D;
	Servomotor testeServomotor;
	SensorFimDeCurso testeSensorFimDeCurso;

	testeServomotor.testeServomotor();
	testepoint2D.testePoint2D();
	testeSensorFimDeCurso.testeSensorFimDeCurso();
	*/
	//delete testeSensorFimDeCurso;
	//delete testeServomotor;
	//delete testepoint2D;



	return 0;
}