#include "Motor.h"

Motor::Motor() {
	_val = 0;
}

Motor::Motor(double _value) {
	_val = _value;
}

void Motor::getValue(double _value) {
	_val = _value;
}

double Motor::_value() const {
	return _val;
}
