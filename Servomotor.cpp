#include "Servomotor.h"

Servomotor::Servomotor() {
	_val = 0;
	_val2 = 0;
}

Servomotor::Servomotor(double _value) {
	_val = _value;
}

Servomotor::Servomotor(double _value, double _value2) {
	_val = _value;
	_val2 = _value2;
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
	
	Servomotor* ptr;
	//Servomotor* ptrServomotor2;

	double _valueAnalogico1 = 500;
	double _valueAnalogico2 = 1024;
	

	ptr = &servomotor1;
	ptr->setValue(_valueAnalogico1);

	ptr = &servomotor2;
	ptr->setValue(_valueAnalogico2);

	cout << "Endereco:" << &servomotor1 << " Valor Analogico Servomotor 1:" << _valueAnalogico1 << endl;
	cout << "Endereco:" << &servomotor2 << " Valor Analogico Servomotor 2:" << _valueAnalogico2 << endl;
	
	
	
	Servomotor servomotor3;
	Servomotor servomotor4;
	//Servomotor* ptrServomotor3;
	//Servomotor* ptrServomotor4;

	double _valueAnalogico3 = 777;
	double _valueAnalogico4 = 888;

	Servomotor(_valueAnalogico3, _valueAnalogico4);
	ptr = &servomotor3;
	ptr->setValue(_valueAnalogico3);
	ptr = &servomotor4;
	ptr->setValue(_valueAnalogico4);

	cout << "Endereco:" << &servomotor3 << " Valor Analogico Servomotor 3:" << _valueAnalogico3 << endl;
	cout << "Endereco:" << &servomotor4 << " Valor Analogico Servomotor 4:" << _valueAnalogico4 << endl;

	ptr = 0;

}