#include "SensorFimDeCurso.h"

SensorFimDeCurso::SensorFimDeCurso() {
	_val = 0;
}

SensorFimDeCurso::SensorFimDeCurso(double _value) : _val(_value) {
	cout << "(" << this << ") SensorFimDeCurso=(" << _val << ") " << endl;
	_val = _value;
}

void SensorFimDeCurso::getValue(double _value) {
	_val = _value;
}

double SensorFimDeCurso::_value() const {
	return _val;
}

void SensorFimDeCurso::testeSensorFimDeCurso() {

	//1. criar instancia para dois objetos
	//2. criar ponteiro
	//3. atribuir valor
	//4. printar
	//5. zerar ponteiro

	SensorFimDeCurso SensorFimDeCurso1;
	SensorFimDeCurso SensorFimDeCurso2;
	SensorFimDeCurso* ptr;
	//SensorFimDeCurso* ptrSensorFimDeCurso2;

	double _valueAnalogico1 = 0;
	double _valueAnalogico2 = 1;
	
	ptr = &SensorFimDeCurso1;
	ptr->getValue(_valueAnalogico1);

	ptr = &SensorFimDeCurso1;
	ptr->getValue(_valueAnalogico2);

	cout << "Endereco:" << &SensorFimDeCurso1 << " Valor Analogico SensorFimDeCurso1 1:" << _valueAnalogico1 << endl;
	cout << "Endereco:" << &SensorFimDeCurso2 << " Valor Analogico SensorFimDeCurso1 2:" << _valueAnalogico2 << endl;
	ptr = 0;
	

}