#include "Point2D.h"
#include "Servomotor.h"
#include "SensorFimDeCurso.h"

Point2D* testepoint2D;
Servomotor* testeServomotor;
SensorFimDeCurso* testeSensorFimDeCurso;
int main(){    

	//1. criar instancia para dois objetos
	//2. criar ponteiro
	//3. atribuir valor
	//4. printar
	//5. zerar ponteiro

	
	testepoint2D->testePoint2D();
	testeServomotor->testeServomotor();
	testeSensorFimDeCurso->testeSensorFimDeCurso();

	delete testeSensorFimDeCurso;
	delete testeServomotor;
	delete testepoint2D;
	
	

	return 0;
}