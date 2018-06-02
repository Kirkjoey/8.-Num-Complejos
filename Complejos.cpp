#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string.h>

using namespace std;

#define tam 50

class SumaResta{
	int real, imaginario;
	public:
		void Asignar(){
			cout<<"Ingresa Real: "; cin>>real;
			cout<<"Ingresa Imaginario: "; cin>>imaginario;
		}
		void Suma(SumaResta t1, SumaResta t2){
			real = t1.real + t2.real;
			imaginario = t1.imaginario + t2.imaginario;
		}
		void Resta(SumaResta t1, SumaResta t2){
			real = t1.real - t2.real;
			imaginario = t1.imaginario - t2.imaginario;
		}
		void Imprimir(){
			if(imaginario < 0){
				cout<<real<<imaginario<<"i"<<endl;
			}
			else{
				cout<<real<<"+"<<imaginario<<"i"<<endl;
			}
		}
};

main(){
	cout << "Hola " << endl;
	getch();
}
