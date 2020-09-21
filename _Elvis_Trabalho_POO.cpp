#include <iostream>
using namespace std;

class MotorDePasso
{
public:
    MotorDePasso() { /*cout << this << endl;*/ }
    MotorDePasso(const MotorDePasso& other) { cout << "Base(Base&)" << endl; }
    explicit MotorDePasso(double _tempo, double _numPassos) :tempoDePasso(_tempo), numPassos(_numPassos) { { cout << "(" << this << ")  = (" << tempoDePasso << ") angle = (" << numPassos << ") " << endl; } }

private:
    double tempoDePasso;
    double numPassos;
   

};

class ControleMotorDePasso : MotorDePasso
{
public:
    // Inherit all constructors from Base
    using MotorDePasso::MotorDePasso;


private:

};



class Servomotor
{
public:
    Servomotor() { /*cout << this << endl;*/ }
    Servomotor(const Servomotor& other) { cout << "Base(Base&)" << endl; }
    explicit Servomotor(double _value, double _angle) : analogValue(_value), angle(_angle) { { cout << "(" << this << ") analogValue = (" << analogValue << ") angle = (" << angle << ") " << endl; } }

private:
    double analogValue;
    double angle;

};

class ControleServo : Servomotor
{
public:
    // Inherit all constructors from Base
    using Servomotor::Servomotor;


private:

};



class Coordenadas
{
public:
    Coordenadas() { /*cout << this << endl;*/ }
    Coordenadas(const Coordenadas& other) { cout << "Base(Base&)" << endl; }
    explicit Coordenadas(double _x, double _y) : x(_x),y(_y)  { { cout << "(" << this << ") coordenada x=(" << x << ")  coordenada y=(" << y << ") " << endl; } }
    
private:
    double x;
    double y;
   
};


class ControleCoordenadas : Coordenadas
{
public:
    // Inherit all constructors from Base
    using Coordenadas::Coordenadas;


private:
    
};

int main()
{
    
    //Maquina de estados
    //Motor de passo deve ter função para escolher o sentido de rotação
    //SensorFimdeCurso deve ter função para saber o seu estado
    //Servomotor1 controla a posição da pinça no eixo horizontal
    //Servomotor2 controla a posição da pinça no eixo vertical
    /*
    Primeiro Estado: Quando a maquina for inicializada, o posicionador deve ser levado até a posição de ORIGEM;
               
               MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição inicial (0,0)
               SensorFimdeCurso X1 deve estar HIGH. 
               SensorFimdeCurso X2 deve estar LOW.
               SensorFimdeCurso Y1 deve estar HIGH.
               SensorFimdeCurso Y2 deve estar LOW.
               Servomotor1 deve estar na posição média em relação ao eixo horizontal
               Servomotor2 deve estar na posição média em relação ao eixo horizontal


     Segundo Estado: Quando a maquina estiver no lugar de origem, o posicionador deve ser levado até a posição de CARREGAMENTO;
                
                MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição carregamento (5,5)
                SensorFimdeCurso X1 pode estar LOW ou HIGH.
                SensorFimdeCurso X2 deve estar LOW.
                SensorFimdeCurso Y1 deve estar LOW.
                SensorFimdeCurso Y2 pode estar LOW ou HIGH.
                Servomotor1 deve ser setado para estar alinhado com a chapa de referência  (0 graus em relação a chapa)
                Servomotor2 deve ser setado para controlar a altura da pinça em relação ao eixo vertical (nao deve chegar no limite)

    Terceiro Estado: Quando a maquina estiver no lugar de Carregamento, o posicionador deve ser levado até a posição de CORTE; 
                
               SensorDeBlister deve estar em HIGH para indicar que a pinça esta posicionada corretamente
               MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição carregamento (15,10)
               SensorFimdeCurso X1 deve estar LOW.
               SensorFimdeCurso X2 deve estar LOW.
               SensorFimdeCurso Y1 deve estar LOW.
               SensorFimdeCurso Y2 pode estar LOW ou HIGH.
               Servomotor1 continua com o mesmo valor do estado 2
               Servomotor2 continua com o mesmo valor do estado 2

    Quarto Estado: Quando a maquina estiver no lugar de CORTE, o posicionador deve ser percorrer uma matriz;
                
               SensorDeBlister deve estar em LOW 
               SensorFimdeCurso X1 deve estar LOW.
               SensorFimdeCurso X2 deve estar LOW.
               SensorFimdeCurso Y1 deve estar LOW.
               SensorFimdeCurso Y2 pode estar LOW ou HIGH.
               MotorDePasso do eixo X e o MotorDePasso do eixo Y devem SER SETADOS PARA PERCORRER UMA MATRIZ (X,Y) que a cada iteração aciona o
               motor da FACA e seu SensorFimDeCursoFACA e, na ultima iteração
               Servomotor1 continua com o mesmo valor do estado 2
               Servomotor2 continua com o mesmo valor do estado 2

     Quinto Estado: Quando a maquina estiver no lugar de CORTE e, terminar a iteração o posicionador deve ser levado para a posição de DESCARTE;
               SensorDeBlister deve estar em LOW 
               SensorFimdeCurso X1 deve estar LOW.
               SensorFimdeCurso X2 deve estar LOW.
               SensorFimdeCurso Y1 deve estar LOW.
               SensorFimdeCurso Y2 pode estar LOW ou HIGH.
               MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição de DESCARTE (45,45)
               Servomotor1 continua com o mesmo valor do estado 2
               Servomotor2 continua com o mesmo valor do estado 1
               
               RETORNAR AO PRIMEIRO ESTADO
    */




    ControleMotorDePasso motordepasso1(1800,10);
    ControleMotorDePasso motordepasso2(1800, 10);
    ControleServo servomotor1(1024, 100);
    ControleServo servomotor2(500, 50);
    ControleCoordenadas coordenadaorigem(0,0);
    ControleCoordenadas coordenadadestino(10, 10); 
    

    
}

