#include "SensorFimDeCurso.h"

SensorFimDeCurso::SensorFimDeCurso() {
	_val = 0;
}

SensorFimDeCurso::SensorFimDeCurso(double _value) {
	_val = _value;
}

void SensorFimDeCurso::getValue(double _value) {
	_val = _value;
}

double SensorFimDeCurso::_value() const {
	return _val;
}
