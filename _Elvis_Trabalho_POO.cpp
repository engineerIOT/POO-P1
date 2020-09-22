#include <iostream>
#include <vector>
using namespace std;


class MaquinaDeEstado
{
public:
    MaquinaDeEstado() { /*cout << this << endl;*/ }
    MaquinaDeEstado(const MaquinaDeEstado& other) { cout << "Base(Base&)" << endl; }
    explicit MaquinaDeEstado(double _value) :value(_value) { cout << "(" << this << ")  SensorFimdeCurso = (" << value << ") " << endl; }

private:
    double value;
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
    void testValSensors(int estado) { 

        /*O estado 1 analisa as ligações da fisicas da maquina*/
        if (estado == 1) { 
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
    MotorDePasso(const MotorDePasso& other) { cout << "Base(Base&)" << endl; }
    explicit MotorDePasso(int _id, double _tempo, double _numPassos) : id(_id), tempoDePasso(_tempo), numPassos(_numPassos) { { cout << "(" << this << ") ID = (" << id << ") tempoDePasso = (" << tempoDePasso << ") angle = (" << numPassos << ") " << endl; } }
    
    void passo(int num) {
      

        const int tam = 4;
        vector <int> v1;
        vector <int> v2;
        vector <int> v3;
        vector <int> v4;

        int passo1[tam] = {0,0,0,0};
        int passo2[tam] = {1,0,0,1};
        int passo3[tam] = {1,0,0,1};
        int passo4[tam] = {1,0,0,1};
        

        if (num == 0) {

            for (int k = 0; k < tam; k++)
                v1.push_back(passo1[k]);

            for (auto k = v1.begin(); k != v1.end(); k++) {
                cout << "Passo1:" << *k << " " << endl;
            }

       }

        
        if (num == 1) {

            for (int k = 0; k < tam; k++)
                v2.push_back(passo2[k]);

            for (auto k = v2.begin(); k != v2.end(); k++) {
                cout << "Passo2:" << *k << " " << endl;
            }
        }
        
        if (num == 2) {

            for (int k = 0; k < tam; k++)
                v3.push_back(passo3[k]);

            for (auto k = v3.begin(); k != v3.end(); k++) {
                cout << "Passo3:" << *k << " " << endl;
            }
        }

        if (num == 3) {

            for (int k = 0; k < tam; k++)
                v4.push_back(passo4[k]);

            for (auto k = v4.begin(); k != v4.end(); k++) {
                cout << "Passo4:" << *k << " " << endl;
            }

        }
    
       

       

        

        /*
        * 
        * 
        vector<int> g1;
        vector<char> g2;

        for (int i = 1; i <= 4; i++)

            g1.push_back(i);

        for (char j = '1'; j <= '4'; j++)
            g2.push_back(j);
        //cout << "I: " << endl;
        for (auto j = g2.begin(); j != g2.end(); ++j) {
            cout << "Passo:" << *j << " " << endl;


            for (auto i = g1.begin(); i != g1.end(); ++i) {
                cout << "IN" << *i << " " << endl;


            }
        
       
        }
        cout << "g1:" << g1[0] << g1[1] << g1[2] << g1[3] << endl; //pega o elemento
        cout << "g2:" << g2[0] << g2[1] << g2[2] << g2[3]; //pega o elemento

        //cout << "J: " << endl;
     

        */
       
        
    };

   
    


private:
    double tempoDePasso;
    double numPassos;
    double id;
   

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
    MotorDePasso MotorDePasso;
    int NumPassos = 4;
    int npasso = 0;

            for (int i = 0; i <= NumPassos; i++) {
            cout << "npasso:" << npasso << endl;

            if (npasso > 4) {
                npasso = 1;
            }
            MotorDePasso.passo(npasso);
            npasso++;
        }
            MotorDePasso.passo(0); //incluir esse ultimo para  desativar as bobinas após o término dos NumPassos


  

    



    
}

