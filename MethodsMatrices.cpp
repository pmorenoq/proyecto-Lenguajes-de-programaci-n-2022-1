#include <iostream>
#include "MethodsMatrices.h"

using namespace std;

int CreacionMatriz1(int n)
{
	int matriz[n][n];

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cout << "Elementos Matriz 1 ["  << i<< "][" << j << "]:";
			cout << matriz[i][j]<<endl;
		}
	}

return 0;
}

int CreacionMatriz2(int n)
{
	int matriz[n][n];

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
				// cout<<"Introduzca 2 numeros"<<endl;
				//cin>>[i][j];
					//para que el usuario introduzca los elementos
			cout << "Elementos Matriz 2 ["  << i<< "][" << j << "]:";
			cout << matriz[i][j]<<endl;
		}
	}

return 0;
}

//Tirar el codigo por una clase matrices
//Mirar tema setters y getters en la otra clase




std::string code;
std::string line;
int cont;
bool a = true;
// Menu interfaz;
// Files archivo; 
    
int main(){

	int* i,j,sum[*i][j];
    int n = 3;
    // cout<<"digite un numero:"; cin>>n;

    CreacionMatriz1(n);
    CreacionMatriz2(n);

    while(a){

	cout<<"Que operacion desea realizar"<<endl;
	cout<<"1. Sumar componentes"<<endl;
	cout<<"2. Restar componentes"<<endl;
	cout<<"3. Multiplicar componentes"<<endl;
	cout<<"4. Dividir componentes"<<endl;
    
	std::cin>>cont;

    switch(cont){
        case 1:
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					sum[i][j] = CreacionMatriz1[i][j] + CreacionMatriz2[i][j];
					//problemas con los punteros 
			}}
        a=false;
        break;

        case 2:
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					sum[i][j] = CreacionMatriz1[i][j] - CreacionMatriz2[i][j];
					//problemas con los punteros 
			}}
		a = false;
        break;

        case 3:
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					sum[i][j] = CreacionMatriz1[i][j] * CreacionMatriz2[i][j];
					//problemas con los punteros    
			}}
		a=false;
        break;

        case 4:
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					sum[i][j] = CreacionMatriz1[i][j] / CreacionMatriz2[i][j];
					//problemas con los punteros         
			}}
		a=false;
        break; 

        default:
        std::cout << "\nEl numero de opcion escrito no es valido\n" << std::endl;

    	}
    }
    return 0;
}




