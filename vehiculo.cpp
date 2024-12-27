#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Vehiculo
{
    protected:
        string numeroPlaca;
        string color;
        string marca;
        string velocimetro;
    public:
        Vehiculo(string,string,string,string);
        void mostrarDatos();
        void cambiarVelocimetro();
};
Vehiculo::Vehiculo(string placa,string col,string mar, string velo)
{
    numeroPlaca=placa;
    color=col;
    marca=mar;
    velocimetro=velo;
}
void Vehiculo::mostrarDatos()
{
    cout<<"Número de placa: "<<numeroPlaca<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Marca: "<<marca<<endl;
    cout<<"Velocimetro: "<<velocimetro<<endl;
}
void Vehiculo::cambiarVelocimetro()
{
    cout<<"ingrese la nueva velocidad: "; getline(cin,velocimetro);
}
class Automovil:public Vehiculo
{
    private:
        int cantidadPuertas;
        int cantidadPasajeros;
    public:
        Automovil(string,string,string,string,int, int);
        void mostrarAutomovil();
        void subirPasajero();
        void bajarPasajero();
};
Automovil::Automovil(string placa, string col, string mar, string velo, int cantpur,int cantpas):Vehiculo(placa,col,mar,velo)
{
    cantidadPuertas=cantpur;
    cantidadPasajeros=cantpas;
}
void Automovil::mostrarAutomovil()
{
    mostrarDatos();
    cout<<"Cantidad de puertas: "<<cantidadPuertas<<endl;
    cout<<"Cantidad de pasajeros: "<<cantidadPasajeros<<endl;
}
void Automovil::subirPasajero()
{
    cantidadPasajeros++;
}
void Automovil::bajarPasajero()
{
    cantidadPasajeros--;
}
class Camion:public Vehiculo
{
    private:
        string carga;
    public:
        Camion(string,string,string,string,string);
        void mostrarCamion();
        void cambiarCarga();
};
Camion::Camion(string placa, string col, string mar, string velo, string car):Vehiculo(placa,col,mar,velo)
{
    carga=car;
}
void Camion::mostrarCamion()
{
    mostrarDatos();
    cout<<"Carga: "<<carga<<endl;
}
void Camion::cambiarCarga()
{
    cout<<"ingrese la nueva carga: "; getline(cin,carga);
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Vehiculo v1("733z2","azul","toyota","120km");
    v1.mostrarDatos();
    v1.cambiarVelocimetro();
    v1.mostrarDatos();
    Automovil a1("8231zz","negro","kia","140km",4,3);
    a1.mostrarAutomovil();
    a1.subirPasajero();
    a1.mostrarAutomovil();
    a1.bajarPasajero();
    a1.mostrarAutomovil();
    Camion c1("973zx","blanco","volvo","150km","800kg");
    c1.mostrarCamion();
    c1.cambiarCarga();
    c1.mostrarCamion();
    return 0;
}