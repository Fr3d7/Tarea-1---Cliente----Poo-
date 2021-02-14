/*nombre: Fredy López 
carné : 3590 20 10386*/

#include "Datos_De_Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,sueldo;
	int codigo_empleado;
	cout<<"\t\t_____________________________"<<endl;
	cout<<"\t\tIngrese codigo de empleado: " <<endl;
	cout<<"\t\t_____________________________"<<endl;
	cin>>codigo_empleado;
	cout<<"\t\t_____________________________"<<endl;
	cout<<"\t\tIngrese puesto: "<<endl;
	cout<<"\t\t_____________________________"<<endl;
	cin>>puesto;
	cout<<"\t\t_____________________________"<<endl;
	cout<<"\t\tIngrese sueldo: "<<endl;
	cout<<"\t\t_____________________________"<<endl;
	cin>>sueldo;
	
	Datos_De_Empleado obj = Datos_De_Empleado(codigo_empleado, puesto, sueldo);
	obj.mostrar();	
	
  system("pause");
  cout<<"\t\t-----------------------------\n";
  cout<<"\t\tGracias por usar este programa\n";
  cout<<"\t\t-----------------------------\n";
}
