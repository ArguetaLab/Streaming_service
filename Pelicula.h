#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include "Contenido.h"

class Pelicula: public Contenido{
private:
public:
    Pelicula(string,string,int,string,float);
    string muestraContenido()override;
    string reproducir()override;

};

#endif // PELICULA_H_INCLUDED
