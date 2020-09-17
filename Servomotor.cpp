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
