#ifndef SERVOMOTOR_H 
#define SERVOMOTOR_H 

using namespace std;
#include <iostream>


class Servomotor
{
public:
	Servomotor();
	Servomotor(double _value);
	Servomotor(double _value, double _value2);
	void setValue(double _value);
	double _value() const;
	void testeServomotor();

private:
	double _val;
	double _val2;

};

#endif //SERVOMOTOR_H 

