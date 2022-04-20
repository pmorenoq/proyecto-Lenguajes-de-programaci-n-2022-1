#include <iostream>
#include "Files.h"
#include <fstream>
#include <stdio.h>
#include <string>

std::string Files::readOperaciones(std::string filename, std::string line, std::string code){
    std::string aux;
    char index;
    std::ifstream file(filename);
        
        if(file.is_open()){
            
            while(getline(file,line)){
                aux = line + "\n";
                code = code + aux;
            }
            file.close();

        std::cout<<"ingresa el primer numero: "<<std::endl;
        std::cin>>index;
        for(int i = 0; i < code.size();i++){
            if(code[i]=='h'){
                code[i] = index;
            }
            else{
                continue;
            }
        
        }

        std::cout<<"ingresa el segundo numero: "<<std::endl;
        std::cin>>index;

                while (index == 0){
                    std::cout<<"ingrese un numero diferente de cero"<<std::endl;
                    std::cin>>index;
                }

        for(int i = 0; i < code.size();i++){
            if(code[i]=='k'){
                code[i] = index;
            }
            else{
                continue;
            }
        }
        std::cout<<code<<std::endl;
        
        }

        else{
            std::cout<<"error file is ot open"<<std::endl;
        
        }

    std::string filenametemp("tmp.casm");
    std::fstream file_out;

    file_out.open(filenametemp, std::ios_base::out);
    if (!file_out.is_open()) {
        std::cout << "failed to open " << filenametemp << '\n';
    } else {
        file_out << code << std::endl;
        std::cout << "Done Writing!" << std::endl;
    }
    return code;

}

std::string Files::readFactorial(std::string filename, std::string line, std::string code){
    std::string aux;
    char index;
    std::ifstream file(filename);
        
        if(file.is_open()){
            
            while(getline(file,line)){
                aux = line + "\n";
                code = code + aux;
            }
            file.close();

        std::cout<<"ingresa un numero numero: "<<std::endl;
        std::cin>>index;

                if (index == 0){
                    index = 1;
                }

        for(int i = 0; i < code.size();i++){
            if(code[i]=='h'){
                code[i] = index;
            }
            else{
                continue;
            }
        
        }

        std::cout<<code<<std::endl;
        
        }

        else{
            std::cout<<"error file is ot open"<<std::endl;
        
        }

    std::string filenametemp("tmp.casm");
    std::fstream file_out;

    file_out.open(filenametemp, std::ios_base::out);
    if (!file_out.is_open()) {
        std::cout << "failed to open " << filenametemp << '\n';
    } else {
        file_out << code << std::endl;
        std::cout << "Done Writing!" << std::endl;
    }
    return code;

}
