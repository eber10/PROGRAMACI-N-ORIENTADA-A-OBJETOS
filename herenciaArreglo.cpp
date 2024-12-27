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
    const int tam=5;
    int nota1[]={11,12,17}, nota2[]={10,14,13}, nota3[]={14,20,19}, nota4[]={18,16,12}, nota5[]={18,19,15};
    Estudiante estu[tam]={{"carlos","89364820",25,nota1,3,"2023-119026"},
                        {"manuela","72018423",19,nota2,3,"2022-119083"},
                        {"camilo","60271620",22,nota3,3,"2023-119027"},
                        {"valeria","62018362",21,nota4,3,"2023-119036"},
                        {"noelia","82937159",22,nota5,3,"2023-119032"}
                    };
    for(int i=0; i<tam; i++)
    {
        estu[i].mostrarEstudiante();
        cout<<endl;
        cout<<"..........................."<<endl;
    }

    return 0;
}