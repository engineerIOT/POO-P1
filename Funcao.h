#include <vector>		//adicionada para utilizar na funcao agrega
#include <iostream>		//biblioteca entradas e saidas
using namespace std;


class Funcao {				//Uma classe abstrata que serve de modelo para outras classes.
public:
	Funcao(Funcao* f) { } //ponteiro para a uncao empregada (f)
	Funcao() { /*cout << "(" << this << ") Funcao Constructed!" << endl;*/ } //construtor padrao
	virtual ~Funcao() { /*cout << "(" << this << ") Funcao Desconstructed!" << endl;*/ }  //destrutor padrao
	//double operator() (double x) = 0;
	virtual double operator()(double x) = 0;


	static double integrar(Funcao* f, double x0, double x1, double step) {	// método estático 
		
		double _operatorX0;
		double _operatorX1;
		double _i;

		//for (_i = x0+step; _i < x1; _i += step)
		for (_i = x0; _i < x1; _i += step)
		{
			cout << "\n" "f(" << _i << ")=" << f->operator()(_i) << endl;
			
		}

		_operatorX0 = f->operator()(x0);
		_operatorX1 = f->operator()(x1);

		_i = (step / 2) * (_operatorX0 + 2 * _area + _operatorX1);
		double erro = ((_i - (VALUE_DEFAULT)) / _i) * 100;
		cout << endl << "erro = " << fabs(erro) << "%" << endl;
		cout << endl << "Integral final = " << (_i) << endl;
		return _i;


	}

private:

	//static double _i;
};

//double Funcao::_i;

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
		//cout << "Funcao agregada resultado: f(" << x << ")= " << _funcaoAgregada << endl;
		return _funcaoAgregada;

	}
private:
	_myVectorFunction _myvector;
	//vector <Funcao*> ::iterator it; //substituido porque nao estava agregando as funcoes
};
