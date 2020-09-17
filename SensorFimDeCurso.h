#ifndef SERVOMOTOR_H 
#define SERVOMOTOR_H 

class SensorFimDeCurso
{
public:
	SensorFimDeCurso();
	SensorFimDeCurso(double _value);
	void getValue(double _value);
	double _value() const;

private:
	double _val;

};

#endif //SENSORFIMDECURSO_H 

