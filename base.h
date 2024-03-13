#ifndef base_h
#define base_h
#include <iostream>
#include <string>

using namespace std;

class Base{
// agregar la clase base de lo que comparten
// Jugador y Enemigo

public:
    int vida, attack;
    string nombre;

    Base();
    Base(int vida, int attack);
    Base(int vida, int attack, string nombre);

    void atacar(Base &j2);


};

#endif