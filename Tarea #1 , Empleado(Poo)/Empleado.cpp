/*nombre: Fredy López 
carné : 3590 20 10386*/
//main
#include <iostream>
using namespace std;
class Empleado{

	protected : string  sueldo, puesto;
				int codigo_empleado;
	
	protected: 			
				Empleado(){
				}
					Empleado(string sue, string pue,int codE){
						codigo_empleado = codE;
						puesto = pue;
						sueldo = sue;	
					}
				void mostrar();
	};			
