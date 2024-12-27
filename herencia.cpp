#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Persona
{
    protected:
        string nombre;
        string dni;
        int edad;
    public:
        Persona(string,string,int);
        void mostrarDatos();
};
Persona::Persona(string n, string d, int e)
{
    nombre=n;
    dni=d;
    edad=e;
}
void Persona::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"Edad: "<<edad<<endl;
}
class Docente:public Persona
{
    private:
        int sueldo;
        string especialidad;
    public:
        Docente(string,string,int,int,string);
        void mostrarDocente();
};
Docente::Docente(string n, string d, int e, int s, string es):Persona(n,d,e)
{
    sueldo=s;
    especialidad=es;
}
void Docente::mostrarDocente()
{
    mostrarDatos();
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"Especialidad: "<<especialidad<<endl;
}
class Estudiante:public Persona
{
    private:
        int notas[3];
        int Nnotas;
        string codigo;
    public:
        Estudiante(string,string,int,int[],int,string);
        void mostrarEstudiante();        
};
Estudiante::Estudiante(string n, string d, int e, int cali[], int num, string cod):Persona(n,d,e)
{
    Nnotas=num;
    for(int i=0; i<Nnotas; i++)
    {
        notas[i]=cali[i];
    }
    codigo=cod;
}
void Estudiante::mostrarEstudiante()
{
    mostrarDatos();
    cout<<"Código: "<<codigo<<endl;
    cout<<"Número de notas: "<<Nnotas<<endl;
    cout<<"Calificación: ";
    for(int i=0; i<Nnotas; i++)
    {
        cout<<notas[i]<<" ";
    }

}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int arr[3]={12,11,17};
    Estudiante e1("eber","71045444",24,arr,3,"2023-119035");
    e1.mostrarEstudiante();
    return 0;
}