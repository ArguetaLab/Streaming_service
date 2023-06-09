#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Contenido.h"

/*
Esta clase va a representar las Series.
En este caso solo tiene un atributo porque todos los demás se los hereda la clase padre.
El único atributo que posee la clase como tal, es un vector llamado EP
Mientras que los métodos 2 son los que heredamos de métodos y el de getCapitulos() nos retorna el vector
*/

class Serie:public Contenido{
    private:
        vector<Capitulo> EP;

    public:
       Serie(string,string,int, string,float, vector<Capitulo> episodios);
       vector<Capitulo> getCapitulos();
       string muestraContenido() override;
       string reproducir() override;
};

#endif // SERIE_H_INCLUDED
