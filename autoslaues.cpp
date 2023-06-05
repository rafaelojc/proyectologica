#include <iostream>
#include <stdio.h>
using namespace std;

class Empleados
{
	protected:
	string primerNombre;
    string segundoNombre;
    string primerApellido;
    string segundoApellido;
    char sexo;
    string fecha_Nacimiento;
    string direccion;
    int telefono;
    int dui;
    double descuento;
    double totalSueldo;
public:
void calculaSueldo(){

// if (sueldo==5000){
//     descuento=sueldo*0.10;
//     totalSueldo=sueldo-descuento;
// }else if(sueldo==350){
//     descuento=sueldo*0.05;
//     totalSueldo=sueldo-descuento;
// }else if(sueldo==1500){
//     descuento=sueldo*0.08;
//     totalSueldo=sueldo-descuento;
// }else if(sueldo==750){
//     descuento=sueldo*0.06;
//     totalSueldo=sueldo-descuento;
// }else{
//      descuento=sueldo*0.03;
//     totalSueldo=sueldo-descuento; 
// }   


  }

};
class Gerentes: public Empleados
{
	public:
	double sueldo=5000;
    void calculaSueldo(double sueld){
        sueld=this->sueldo;

        if (sueld==5000){
        descuento=sueld*0.10;
        totalSueldo=sueld-descuento;
        cout<<"El sueldo liquido a pagar es>"<<totalSueldo;
         }else if(sueld==350){
        descuento=sueld*0.05;
        totalSueldo=sueld-descuento;
         }else if(sueld==1500){
        descuento=sueld*0.08;
        totalSueldo=sueld-descuento;
        }else if(sueld==750){
        descuento=sueld*0.06;
        totalSueldo=sueld-descuento;
        }else{
        descuento=sueld*0.03;
        totalSueldo=sueld-descuento; 
        }   

    }  
    private:

	
};

class Tecnicos: public Empleados
{
	public:
	 double sueldo=350;
    private:
	
};

class JefeAreas: public Empleados
{
	public:
	 double sueldo=1500;  
    private:
	
};

class Supervisor: public Empleados
{
	public:
    double sueldo=750;  
    private:
	
};

int main(){

    Gerentes gerente;
    gerente.sueldo=5000;
    gerente.calculaSueldo(gerente.sueldo);

}