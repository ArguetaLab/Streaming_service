#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Contenido.h"

class Serie:public Contenido{

private:
    vector<Capitulo> vect;

public:
   Serie(string,string,int, string,float, vector<Capitulo> episodios);
   vector<Capitulo> getCapitulos();
   void reproducir(int episodio);
   string muestraContenido() override;
   string reproducir() override;
};

#endif // SERIE_H_INCLUDED
