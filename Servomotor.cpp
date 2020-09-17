#include "Servomotor.h"

Servomotor::Servomotor() {
	_val = 0;
}

Servomotor::Servomotor(double _value) {
	_val = _value;
}

void Servomotor::setValue(double _value) {
	_val = _value;
}

double Servomotor::_value() const {
	return _val;
}

void Servomotor::testeServomotor() {

	//1. criar instancia para dois objetos
	//2. criar ponteiro
	//3. atribuir valor
	//4. printar
	//5. zerar ponteiro

	Servomotor servomotor1;
	Servomotor servomotor2;
	Servomotor* ptrServomotor;

	double _valueAnalogico1 = 500;
	double _valueAnalogico2 = 1024;

	ptrServomotor = &servomotor1;
	ptrServomotor->setValue(_valueAnalogico1);

	ptrServomotor = &servomotor2;
	ptrServomotor->setValue(_valueAnalogico2);

	cout << "Endereco:" << &servomotor1 << " Valor Analogico Servomotor 1:" << _valueAnalogico1 << endl;
	cout << "Endereco:" << &servomotor2 << " Valor Analogico Servomotor 2:" << _valueAnalogico2 << endl;
	

}