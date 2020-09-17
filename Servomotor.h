#ifndef SERVOMOTOR_H 
#define SERVOMOTOR_H 

class Servomotor
{
public:
	Servomotor();
	Servomotor(double _value);
	void setValue(double _value);
	double _value() const;
	void testeServomotor();

private:
	double _val;

};

#endif //SERVOMOTOR_H 

