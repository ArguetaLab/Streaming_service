#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Contenido.h"

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
