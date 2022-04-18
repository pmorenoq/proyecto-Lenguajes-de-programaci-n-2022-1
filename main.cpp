#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Menu.h"
#include "Files.h"

std::string code;
std::string line;
int cont;
bool a = true;
Menu interfaz;
Files archivo; 

int main(){
    while(a){
    interfaz.interfaz_usuario();
    std::cin>>cont;

    switch(cont){
        case 1:
        archivo.read("TrianguloPascal.casm",line,code);
        system("java -jar JCoCo.jar TrianguloPascal.casm");
        a=false;
        break;

        case 2:
        archivo.read("Factorial.casm", line,code);
        system("java -jar JCoCo.jar Factorial.casm");
        a=false;
        break;

        case 3:
        archivo.read("Operaciones.casm",line,code);
        system("java -jar JCoCo.jar tmp.casm");
        a=false;
        break;

        case 4:
        archivo.read("Matrices.casm",line,code);
        system("java -jar JCoCo.jar lista.casm");
        a=false;
        break; 

        default:
        std::cout << "\nEl numero de opcion escrito no es valido\n" << std::endl;

    }
    }
    return 0;
}


