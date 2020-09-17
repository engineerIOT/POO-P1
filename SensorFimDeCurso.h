#ifndef SENSORFIMDECURSO_H 
#define SENSORFIMDECURSO_H

using namespace std;
#include <iostream>

class SensorFimDeCurso
{
public:
	SensorFimDeCurso();
	SensorFimDeCurso(double _value);
	void getValue(double _value);
	double _value() const;
	void testeSensorFimDeCurso();

private:
	double _val;

};

#endif //SENSORFIMDECURSO_H 

