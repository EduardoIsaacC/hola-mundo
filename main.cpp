#include <iostream>
#include <list>
#include <string>
using namespace std;

#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
int main(int argc, char const *argv[])
{
    list<Dibujo>dibujos;
    
    Dibujo dibujo1("./assets/donperro.txt");
    dibujo1.Dibujar();
    Dibujo dibujo2("./assets/cesarin.txt");
    dibujo2.Dibujar();

    //dibujos.push_front(dibujo);
    //dibujos.push_front(dibujo2);

    /* code */
    Mascota m1;
    Mascota m2;
    Mascota m3;

    list<Mascota>mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);

    Alimento alimento(5);

    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);

    }
    for (auto &&mascotaActual : mascotas)
    {
        cout<<"Mascota "<<mascotaActual.LeerEnergia() <<endl;
    }
    
    return 0;
}
