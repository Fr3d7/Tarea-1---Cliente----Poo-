/*nombre: Fredy López 
carné : 3590 20 10386*/


#include "Empleado.cpp"
#include <iostream>

using namespace std;
class Datos_De_Empleado : Empleado{
	
	public:
	 
		Datos_De_Empleado(){
		}
		Datos_De_Empleado(int codE, string pue, string sue) : Empleado(sue,pue,codE){
		}
		
	void setCodEmpleado(int codE){codigo_empleado = codE;}
	void setPuesto(string pue){puesto = pue;}
	void setSueldo(string sue){sueldo = sue;}


	int getoCodEmpleado(){return codigo_empleado;}
	string getPuesto(){return puesto;}
	string getSueldo(){return sueldo;}
	
	void mostrar(){

		cout<<"\t\t____________________________"<<endl;
		cout<<"Codigo de empleado: "<<codigo_empleado<<"\n puesto: "<<puesto<<"\n Sueldo: "<<sueldo<<endl;
		}
};

