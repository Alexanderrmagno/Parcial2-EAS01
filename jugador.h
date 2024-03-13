#ifndef jugador_h
#define jugador_h
#include "Base.h"

#include <string>
using namespace std;


class Jugador : public Base
{
public:
    Jugador *atacadoPor;

    Jugador() : Base()
    {
        atacadoPor = nullptr;
    }
    Jugador(int vida, int attack, string nombre) : Base(vida, attack, nombre)
    {
        atacadoPor = nullptr;
    }

    Jugador(int vida, int attack);

    void atacarJugador(Jugador &j2);
};

#endif