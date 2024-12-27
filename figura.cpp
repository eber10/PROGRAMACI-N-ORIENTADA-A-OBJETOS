#include<iostream>
#include<string>
#include<cmath>
#include<windows.h>
using namespace std;
class Figura
{
    protected:
        string color;
        string tipo;
    public:
        Figura(string, string);
        void mostrarDatos();
};
Figura::Figura(string co, string tip)
{
    color=co;
    tipo=tip;
}
void Figura::mostrarDatos()
{
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Color: "<<color<<endl;
}
class Circulo:public Figura
{
    private:
        double radio;
    public:
        Circulo(string, string, double);
        void mostrarCirculo();
        void calcularArea();
        void calcularPerimetro();
};
Circulo::Circulo(string co, string tip, double ra):Figura(co,tip)
{
    radio=ra;
}
void Circulo::mostrarCirculo()
{
    mostrarDatos();
    cout<<"Radio: "<<radio<<endl;
}
void Circulo::calcularArea()
{

    cout<<"ÁREA: "<<3.14*pow(radio,2)<<endl;
}
void Circulo::calcularPerimetro()
{
    cout<<"Perímetro: "<<2*3.14*radio<<endl;
}
class Rectangulo:public Figura
{
    private:
        double base;
        double altura;
    public:
        Rectangulo(string, string, double, double);
        void mostrarRectangulo();
        void calcularArea();
};
Rectangulo::Rectangulo(string co, string tip, double ba, double al):Figura(co,tip)
{
    base=ba;
    altura=al;
}
void Rectangulo::mostrarRectangulo()
{
    mostrarDatos();
    cout<<"Base: "<<base<<endl;
    cout<<"Altura: "<<altura<<endl;
}
void Rectangulo::calcularArea()
{
    cout<<"ÁREA: "<<base*altura<<endl;
}
class Triangulo:public Figura
{
    private:
        double base;
        double altura;
        string tipo;
    public:
        Triangulo(string,string,double,double,string);
        void mostrarTriangulo();
        void calcularArea();

};
Triangulo::Triangulo(string co,string tip, double bas,double alt,string ti):Figura(co,tip)
{
    base=bas;
    altura=alt;
    tipo=ti;
}
void Triangulo::mostrarTriangulo()
{
    mostrarDatos();
    cout<<"Base: "<<base<<endl;
    cout<<"Altura: "<<altura<<endl;
    cout<<"tipo: "<<tipo<<endl;
}
void Triangulo::calcularArea()
{
    cout<<"ÁREA: "<<(base*altura)/2<<endl;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Figura f1("azul","triangulo");
    f1.mostrarDatos();
    Circulo c1("verde","circulo",4);
    c1.mostrarCirculo();
    c1.calcularArea();
    c1.calcularPerimetro();
    Rectangulo r1("morado","rectangulo",10,7);
    r1.mostrarRectangulo();
    r1.calcularArea();
    Triangulo t1("rojo","triangulo",12,8,"isoceles");
    t1.mostrarTriangulo();
    t1.calcularArea();
    return 0;
}