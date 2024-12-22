#include<iostream>
#include<string>
using namespace std;
class Persona
{
    //atributos(caracteristicas).
    private://aplicación de encapsulación.
        string nombre; //proceso de abstracción. 
        string dni;
        int edad;
    public:
        Persona(string,string,int);//inicialización de constructor.
        //métodos(acciones).
        void escribir();
        void leer();
};
Persona::Persona(string n, string d, int e)
{
    nombre=n;
    dni=d;
    edad=e;
}
void Persona::escribir()
{
    cout<<"soy "<<nombre<<" y estoy escribiendo un libro  de cuentos, ademas tengo "<<edad<<" anios, identificado con dni: "<<dni<<endl;
}
void Persona::leer()
{
    cout<<"soy "<<nombre<<" y estoy leyendo una novela romantica, ademas tengo "<<edad<<" anios, identificado con dni: "<<dni<<endl; 
}
int main()
{
    //creamos un objeto.
    Persona p1("marcos","09372863",18);
    p1.escribir();
    p1.leer();
    return 0;
}