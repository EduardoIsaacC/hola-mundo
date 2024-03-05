#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Dibujo{
    private:
    fstream file;
    public:
    Dibujo(string path){
        file.open("./assets/donperro.txt");
    }
    ~Dibujo(){
        file.close();
    }
    void Dibujar(){
        string linea;
        while (getline (file,linea)){
            cout<<linea<<endl;
        }

    }
};