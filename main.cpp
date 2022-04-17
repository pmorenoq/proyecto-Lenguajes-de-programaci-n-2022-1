#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

string filename;
string line;
int cont = 1;

int main(){

    while(cont>0){

        cout<<"insert filename:"<<endl;
        cin>>filename;
        ifstream file(filename);
        
        if(file.is_open()){
            
            while(getline(file,line)){
                cout<<line<<endl;
            }
            file.close();
            cont--;
        }
        else{
            cout<<"file is ot open, please insert a correct file"<<endl;
        }
    }
    if(filename=="pascal.casm"){
        system("java -jar JCoCo.jar pascal.casm");
    }
    else if(filename=="factorial.casm"){
        system("java -jar JCoCo.jar factorial.casm");
    }
    else if(filename=="operaciones.casm"){
         system("java -jar JCoCo.jar operaciones.casm");
    }
    else if(filename=="lista,casm"){
        system("java -jar JCoCo.jar lista.casm");
    }
   
    
    
    return 0;
} 



