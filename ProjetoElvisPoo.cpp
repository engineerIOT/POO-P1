#ifndef ELVIS_P2_H_INCLUDED
#define ELVIS_P2_H_INCLUDED
#include <iostream>
using namespace std; //std::cout << "Hello World!111111\n";
#include <vector>		//adicionada para utilizar na funcao agrega


class Funcao {				//Uma classe abstrata que serve de modelo para outras classes.
public:
	Funcao(Funcao* f) { } //ponteiro para a uncao empregada (f)
	Funcao() { /*cout << "(" << this << ") Funcao Constructed!" << endl;*/ } //construtor padrao
	virtual ~Funcao() { /*cout << "(" << this << ") Funcao Desconstructed!" << endl;*/ }  //destrutor padrao
	//double operator() (double x) = 0;
	virtual double operator()(double x) = 0;


	static double passo(Funcao* f, double tempo, double numPassos, double npasso) {	// método estático 
		for (double j = 0; j <= 4; j++) {

			for (double i = 0; i < numPassos; i++) {
				cout << "npasso:" << i << endl;//printf(npasso);
				npasso++;
				
				if (npasso > 4) {
					npasso = 1;
				}
				//passo(npasso);
				//delayMicroseconds(tempo);

			}
			//passoDisabled1();
		}
		return 1;

		//void passoDisabled1() {};
			/*digitalWrite(IN1, 0);
			digitalWrite(IN2, 0);
			digitalWrite(IN3, 0);
			digitalWrite(IN4, 0);
			*/
		
			
	}

private:

	//static double _i;
};



typedef vector<Funcao*> _myVectorFunction;

class FuncaoAgregada : public Funcao {
public:
	FuncaoAgregada() {}
	void agrega(Funcao* f) {
		_myvector.push_back(f);
	}
	double operator()(double x) {
		double _funcaoAgregada = 0;
		for (_myVectorFunction::iterator it = _myvector.begin(); it != _myvector.end(); it++) {
			_funcaoAgregada += static_cast<Funcao*>(*it)->operator()(x);
		}
		return _funcaoAgregada;
	}
private:
	_myVectorFunction _myvector;

};


class Motor : public Funcao {
public:Motor(double val) : _value(val) { cout << "(" << this << ") Motor(ID)=(" << _value << ") " << endl; }
	Motor() { cout << "(" << this << ") Motor Constructed!" << endl; }
	double operator()(double x) {
		return (_value);
	}

private:
	double _value;
};


void teste() {
	Motor a(0);					 //a(x) = 5
	Motor b(1);					 //b(x) = 5
	//FuncaoAgregada c;				 //c(x) = (5 + 5)	
	//c.agrega(&a);
	//c.agrega(&b);

	//cout << " Valor do passo do Motor A: " ;
	cout << Funcao::passo(&a, 1800, 10, 1) << endl;

	//cout << " Valor do passo do Motor B: ";
	cout << Funcao::passo(&a, 1800, 10,1) << endl;

}

int main() {
	teste();
	
	return 9999;
}


#endif // ELVIS_P2_H_INCLUDED