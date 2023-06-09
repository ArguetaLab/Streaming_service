#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include "Contenido.h"

/*
Esta clase va a representar las Películas.
En este caso no tiene atributos porque todos se los hereda la clase padre
mientras que los métodos son también los que heredamos de métodos
*/

class Pelicula: public Contenido{
    private:
    public:
        Pelicula(string,string,int,string,float);
        string muestraContenido()override;
        string reproducir()override;

};

#endif // PELICULA_H_INCLUDED
