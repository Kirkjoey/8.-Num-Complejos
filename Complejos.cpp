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
	SumaResta T[tam];
	char masop;
	int i=2;
	T[1].Asignar();
	cout<<"Sumar/Restar [+/-]: "; cin>>masop;
	for (int k=0; k<tam; k++){
		if (masop == '+'){
			T[i].Asignar();
			if(i==2){
				T[0].Suma(T[1], T[i]);
			}
			else{
				T[0].Suma(T[0], T[i]);
			}
			for(int j=1; j<=i; j++){
				cout<<"Numero "<<j<<": ";
				T[j].Imprimir();
			}
			i++;
			cout<<"Sumar/Restar/Total [+/-/=]: "; cin>>masop;
			}
		else if(masop == '-'){
			T[i].Asignar();
			if(i==2){
				T[0].Resta(T[1], T[i]);
			}
			else{
				T[0].Resta(T[0], T[i]);
			}
			for(int j=1; j<=i; j++){
				cout<<"Numero "<<j<<": ";
				T[j].Imprimir();
			}
			i++;
			cout<<"Sumar/Restar/Total [+/-/=]: "; cin>>masop;
		}
		else
			k=51;
	}
	if(i==2){
		cout<<"Total: "<<endl;
		T[1].Imprimir();
	}
	else{
		cout<<"Total: "<<endl;
		T[0].Imprimir();
	}
	getch();
}
