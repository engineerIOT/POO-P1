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

	
	//Servomotor servomotorA;		 //criando instancia para um objeto do tipo Servomotor
	//Servomotor servomotorB;		 //criando instancia para um objeto do tipo Servomotor

	//Servomotor* ptr;			 //criando ponteiro para um objeto do tipo Servomotor

	//double valorAnalogico = 0;
	//Servomotor(&valorAnalogico);

	//ptr = &servomotorA;			 //
	//ptr->setValue(valorAnalogico);

	
	
	//4. printar
	//5. zerar ponteiro

}