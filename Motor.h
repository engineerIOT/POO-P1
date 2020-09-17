#ifndef MOTOR_H 
#define MOTOR_H 

class Motor
{
public:
	Motor();
	Motor(double _value);
	void getValue(double _value);
	double _value() const;

private:
	double _val;

};

#endif //MOTOR_H
