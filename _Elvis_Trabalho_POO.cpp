#include <iostream>
#include <vector>
//#include <time.h>
using namespace std;


class MaquinaDeEstado
{
public:
    MaquinaDeEstado() { /*cout << this << endl;*/ }
    MaquinaDeEstado(const MaquinaDeEstado& other) { cout << "Base(Base&)" << endl; }
    //explicit MaquinaDeEstado(double _value) :value(_value) { cout << "(" << this << ")  Estado = (" << value << ") " << endl; }
    double defineEstado(double _value) {
        cout << "(" << this << ")  MaquinaDeEstado = (" << _value << ") " << endl;
        return (_value);
    }
private:
    double _value;
};

class ControleMaquinaDeEstado : MaquinaDeEstado
{
public:
    // Inherit all constructors from Base
    using MaquinaDeEstado::MaquinaDeEstado;


private:

};


class SensorFimdeCurso 
{
public:
        
    SensorFimdeCurso() { /*cout << this << endl;*/ }
    SensorFimdeCurso(const SensorFimdeCurso& other) { cout << "Base(Base&)" << endl; }
    explicit SensorFimdeCurso(double _value) :value(_value) { cout << "(" << this << ")  SensorFimdeCurso = (" << value << ") " << endl; }
    double estadoSensor(double _value) {
        cout << "(" << this << ")  SensorFimdeCurso = (" << _value << ") " << endl;
        return (_value);
    }
    void testValSensors(int estado, int valorSensor1, int valorSensor2, int valorSensor3, int valorSensor4) {

        /*O estado 1 analisa as ligações da fisicas da maquina*/
        if (estado == 1) { 
        SensorFimdeCurso sensorX1;
        SensorFimdeCurso sensorX2;
        SensorFimdeCurso sensorY1;
        SensorFimdeCurso sensorY2;

        SensorFimdeCurso* ptr;

        ptr = &sensorX1;
        double valSensorX1 = ptr->estadoSensor(valorSensor1);

        ptr = &sensorX2;
        double valSensorX2 = ptr->estadoSensor(valorSensor2);

        ptr = &sensorY1;
        double valSensorY1 = ptr->estadoSensor(valorSensor3);

        ptr = &sensorY2;
        double valSensorY2 = ptr->estadoSensor(valorSensor4);

        //INICIO X
        if (valSensorX1 == 0 && valSensorX2 == 0) {
            cout << "Ativar o Motor eixo X para a esquerda" << endl; 
          
            

        }

        if (valSensorX1 == 0 && valSensorX2 == 1) {
            cout << "Verificar ligacoes porque o sentido do Motor do eixo X pode estar invertido" << endl; 
        }

        if (valSensorX1 == 1 && valSensorX2 == 0) {
            cout << "Desativar o Motor eixo X" << endl; 
        }

        if (valSensorX1 == 1 && valSensorX2 == 1) {
            cout << "Desativar o Motor eixo X" << endl; 
            cout << "Verificar ligacoes porque o sentido do Motor do eixo X pode estar invertido" << endl;
        }

        //FIM X


       //INICIO Y
        if (valSensorY1 == 0 && valSensorY2 == 0) {
            cout << "Ativar o Motor eixo Y para a esquerda" << endl;
        }

        if (valSensorY1 == 0 && valSensorY2 == 1) {
            cout << "Verificar ligacoes porque o sentido do Motor do eixo Y pode estar invertido" << endl;
        }

        if (valSensorY1 == 1 && valSensorY2 == 0) {
            cout << "Desativar o Motor eixo Y" << endl;
        }

        if (valSensorY1 == 1 && valSensorY2 == 1) {
            cout << "Desativar o Motor eixo Y" << endl;
            cout << "Verificar ligacoes porque o sentido do Motor do eixo Y pode estar invertido" << endl;
        }

        //FIM Y

        }
    
    }
    
private:
    double value;
};

class ControleSensorFimdeCurso : SensorFimdeCurso
{
public:
    // Inherit all constructors from Base
    using SensorFimdeCurso::SensorFimdeCurso;


private:

};





class MotorDePasso 
{
public:
    MotorDePasso() { /*cout << this << endl;*/ }

    explicit MotorDePasso(int _numPassos, int _sentido, int _modoOperacao) : numPassos(_numPassos),sentido(_sentido), modoOperacao(_modoOperacao) {

        cout << "(" << this << ") Numero de Passos = (" << numPassos << ") Sentido = (" << sentido << ") Modo de Operacao = (" << modoOperacao << ") " << endl;

    MotorDePasso MotorDePasso;
    MotorDePasso.testeMotor(_numPassos, _sentido, _modoOperacao);
    }

    MotorDePasso(const MotorDePasso& other) { cout << "Base(Base&)" << endl; }
    explicit MotorDePasso(int _id, double _tempo, double _numPassos, int _sentido) : id(_id), tempoDePasso(_tempo), numPassos(_numPassos), sentido(_sentido) {
        { cout << "(" << this << ") ID = (" << id << ") tempoDePasso = (" << tempoDePasso << ") angle = (" << numPassos << ") " << endl; }

    }

    void testeMotores() {
        MotorDePasso motordepasso;
        MotorDePasso motordepasso2;

        MotorDePasso* ptr;

        ptr = &motordepasso;
        ptr->testeMotor(6, 1, 1);

        ptr = &motordepasso2;
        ptr->testeMotor(6, 1, 2);

    }
    
    void testeMotor(int NumPassos, int sentido, int modoOperacao) {

        MotorDePasso MotorDePasso;
        int var = 0;
        int npasso = 0;
        //int modoOperacao = 1; //paralelo

       // int sentido = 1;

        if (sentido == 1) {
            cout << "MOTOR PARA A ESQUERDA:" << endl;

            for (int i = 0; i < NumPassos; i++) {


                if (npasso > 4) {
                    npasso = 1;

                }

                cout << "Passo Atual:" << npasso << endl;

                MotorDePasso.passo(npasso, modoOperacao);
                npasso++;

                cout << "i:" << i << endl;

            }
            cout << "DESTIVANDO AS BOBINAS:" << endl;
            MotorDePasso.passo(0, modoOperacao); //incluir esse ultimo para  desativar as bobinas após o término dos NumPassos para evitar aquecimento das bobinas

        }

        else if (sentido == 2) {
            cout << "MOTOR PARA A DIREITA:" << endl;

            for (int i = 0; i < NumPassos; i++) {

                npasso--;

                if (npasso < 0) {
                    npasso = 4;
                }

                cout << "Passo Atual:" << npasso << endl;

                MotorDePasso.passo(npasso, modoOperacao);

            }
            cout << "DESTIVANDO AS BOBINAS:" << endl;
            MotorDePasso.passo(0, modoOperacao); //incluir esse ultimo para  desativar as bobinas após o término dos NumPassos para evitar aquecimento das bobinas


        }

    };

   
    


private:
    double tempoDePasso;
    double numPassos;
    double id;
    int sentido;
    int modoOperacao;

   

    void passo(int num, int modo) {


        const int tam = 4;
        vector <int> v0;
        vector <int> v1;
        vector <int> v2;
        vector <int> v3;
        vector <int> v4;
        vector <int> Fase(tam);

        int passo0Serie[tam] = { 0,0,0,0 };
        int passo1Serie[tam] = { 1,0,0,1 };
        int passo2Serie[tam] = { 0,1,0,1 };
        int passo3Serie[tam] = { 0,1,1,0 };
        int passo4Serie[tam] = { 1,0,1,0 };


        int passo0Paralelo[tam] = { 0,0,0,0 };
        int passo1Paralelo[tam] = { 1,0,0,1 };
        int passo2Paralelo[tam] = { 1,1,0,0 };
        int passo3Paralelo[tam] = { 0,1,1,0 };
        int passo4Paralelo[tam] = { 0,0,1,1 };

        //int modo = 2;


        if (num == 0) {

            for (int k = 0; k < tam; k++)
                if (modo == 1) {
                    v0.push_back(passo0Serie[k]);
                }

                else if (modo == 2) {
                    v0.push_back(passo0Paralelo[k]);

                }


            for (auto k = v0.begin(); k != v0.end(); k++) {
                cout << "Passo0:" << *k << " " << endl;
            }

        }


        if (num == 1) {

            for (int k = 0; k < tam; k++)
                if (modo == 1) {
                    v1.push_back(passo1Serie[k]);
                }

                else if (modo == 2) {
                    v1.push_back(passo1Paralelo[k]);
                }

            for (auto k = v1.begin(); k != v1.end(); k++) {
                cout << "Passo1:" << *k << " " << endl;
            }
        }

        if (num == 2) {

            for (int k = 0; k < tam; k++)
                if (modo == 1) {
                    v2.push_back(passo2Serie[k]);
                }

                else if (modo == 2) {
                    v2.push_back(passo2Paralelo[k]);
                }

            for (auto k = v2.begin(); k != v2.end(); k++) {
                cout << "Passo2:" << *k << " " << endl;
            }
        }

        if (num == 3) {

            for (int k = 0; k < tam; k++)
                if (modo == 1) {
                    v3.push_back(passo3Serie[k]);
                }

                else if (modo == 2) {
                    v3.push_back(passo3Paralelo[k]);
                }

            for (auto k = v3.begin(); k != v3.end(); k++) {
                cout << "Passo3:" << *k << " " << endl;
            }

        }

        if (num == 4) {

            for (int k = 0; k < tam; k++)
                if (modo == 1) {
                    v4.push_back(passo4Serie[k]);
                }


                else if (modo == 2) {
                    v4.push_back(passo4Paralelo[k]);
                }

            for (auto k = v4.begin(); k != v4.end(); k++) {
                cout << "Passo4:" << *k << " " << endl;
            }

        }

    }
   

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
    explicit Servomotor(double _value) : analogValue(_value)  { cout << "(" << this << ")  analogValue = (" << _value << ") " << endl;
    }

    double setValServo(double _value) {
        cout << "(" << this << ")  Servomotor = (" << _value << ") " << endl;
        return (_value);
    }

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
    void setValCoordenadas(double _x, double _y) { { cout << "(" << this << ") coordenada x=(" << _x << ")  coordenada y=(" << _y << ") " << endl; } }



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


class Point2D
{
public:
    //Point2D(Point2D* p) { } //ponteiro para a uncao empregada (f)
    Point2D() {
        xVal = 0.0;
        yVal = 0.0;
    }
    Point2D(double x, double y) : xVal(x), yVal(y) {
        cout << "(" << this << ") x=(" << xVal << ") " << " y=(" << yVal << ")" << endl;
        xVal = x;
        yVal = y;
    }
    void setX(double x) {
        xVal = x;
    }
    void setY(double y) {
        yVal = y;
    }
    
    double x() const {
        return xVal;
    }
   double y() const {
        return yVal;
    }

   void testePoint2D() {

       //1. criar instancia para dois objetos
       //2. criar ponteiro
       //3. atribuir valor
       //4. printar
       //5. zerar ponteiro

       Point2D alpha; //criando instancia para um objeto do tipo Point2D
       Point2D beta;  //criando instancia para um objeto do tipo Point2D
       Point2D* ptr;  //criando ponteiro para um objeto do tipo Point2D
       //Point2D* ptr2;  //criando ponteiro para um objeto do tipo Point2D

       double x1 = 1.1;	//atribuindo valor para x1
       double y1 = 2.5;	//atribuindo valor para y1
       Point2D(x1, y1);	//atribuindo valor para o construtor


       ptr = &alpha;		//
       ptr->setX(x1);		//
       ptr->setY(y1);		//


       double x2 = 5.3;	//atribuindo valor para x2
       double y2 = 6.5;	//atribuindo valor para y2
       Point2D(x2, y2);	//atribuindo valor para o construtor

       ptr = &beta;		//
       ptr->setX(x2);		//
       ptr->setY(y2);		//

       cout << "Endereco:" << &alpha << " x1:" << x1 << "" << " y1:" << y1 << endl;
       cout << "Endereco:" << &beta << " x2:" << x2 << "" << " y2:" << y2 << endl;

       ptr = 0;
  }


private:
    double xVal;
    double yVal;

};


int main()
{

    //Maquina de estados
    //Motor de passo deve ter função para escolher o sentido de rotação
    //SensorFimdeCurso deve ter função para saber o seu estado
    //Servomotor1 controla a posição da pinça no eixo horizontal
    //Servomotor2 controla a posição da pinça no eixo vertical
    //MotorDePasso1 controla o posicionador no eixo X
      //MotorDePasso1 controla o posicionador no eixo Y
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



    //Primeiro Estado : Quando a maquina for inicializada, o posicionador deve ser levado até a posição de ORIGEM;
    int botao = 1;

    if (botao ==1) {
        cout << "Maquina Inicializada" << endl;
      
        Point2D origem; //criando instancia para um objeto do tipo Point2D
        Point2D beta;  //criando instancia para um objeto do tipo Point2D
        Point2D* ptrCoordenadas;  //criando ponteiro para um objeto do tipo Point2D
        //Point2D* ptr2;  //criando ponteiro para um objeto do tipo Point2D

        double x1 = 5;	//atribuindo valor para x1
        double y1 = 5;	//atribuindo valor para y1
        Point2D(x1, y1);	//atribuindo valor para o construtor


        ptrCoordenadas = &origem;		
        ptrCoordenadas->setX(x1);		
        ptrCoordenadas->setY(y1);		
            

        Servomotor servomotor1;
        Servomotor servomotor2;
        Servomotor * ptrServomotor;

        ptrServomotor = &servomotor1;
        double valServomotor1 = ptrServomotor->setValServo(500);

        ptrServomotor = &servomotor2;
        double valServomotor2 = ptrServomotor->setValServo(500);


        MaquinaDeEstado estado1;
        MaquinaDeEstado estado2;
        MaquinaDeEstado estado3;    
        MaquinaDeEstado estado4;
        MaquinaDeEstado estado5;
        MaquinaDeEstado* ptrEstado;
       

        ptrEstado = &estado1;
        double valEstado1 = ptrEstado->defineEstado(1);

        ptrEstado = &estado2;
        double valEstado2 = ptrEstado->defineEstado(2);

        ptrEstado = &estado3;
        double valEstado3 = ptrEstado->defineEstado(3);

        ptrEstado = &estado4;
        double valEstado4 = ptrEstado->defineEstado(4);

        ptrEstado = &estado5;
        double valEstado5 = ptrEstado->defineEstado(5);

       

        SensorFimdeCurso sensorX1; 
        SensorFimdeCurso sensorX2;
        SensorFimdeCurso sensorY1;
        SensorFimdeCurso sensorY2;
        SensorFimdeCurso* ptr;

 

        ptr = &sensorX1;
        double valSensorX1 = ptr->estadoSensor(0);

        ptr = &sensorX2;
        double valSensorX2 = ptr->estadoSensor(0);

        ptr = &sensorY1;
        double valSensorY1 = ptr->estadoSensor(0);

        ptr = &sensorY2;
        double valSensorY2 = ptr->estadoSensor(0);

    
        //ptr->testValSensors(1, valSensorX1, valSensorX2, valSensorY1, valSensorY2);
        //delete ptr;


        if (valEstado1 ==1) {
            cout << "Estamos no estado 1" << endl;
            //MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição inicial(0, 0)

            valSensorX1 = ptr->estadoSensor(1); //SensorFimdeCurso X1 deve estar HIGH.
            valSensorX2 = ptr->estadoSensor(0); //SensorFimdeCurso X2 deve estar LOW.
            valSensorY1 = ptr->estadoSensor(1); //SensorFimdeCurso Y1 deve estar HIGH.
            valSensorY2 = ptr->estadoSensor(0); //SensorFimdeCurso Y2 deve estar LOW.

            valServomotor1 = ptrServomotor->setValServo(500);
            valServomotor2 = ptrServomotor->setValServo(500);
         

                
        }

        if (valEstado2 == 2) {
            cout << "Estamos no estado 2" << endl;

        }

        if (valEstado3 == 3) {
            cout << "Estamos no estado 3" << endl;

        }

         if (valEstado4 == 4) {
            cout << "Estamos no estado 4" << endl;

        }

        if (valEstado5 == 5) {
            cout << "Estamos no estado 5" << endl;

        }

        

      



    }
    //MotorDePasso do eixo X e o MotorDePasso do eixo Y devem ir para a posição inicial(0, 0)
    
    


}

