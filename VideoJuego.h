#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED
#include "Contenido.h"

class VideoJuego:public Contenido{
private:
public:
    VideoJuego(string,string,int,string,float);
    string muestraContenido() override;
    string reproducir() override;
};

#endif // VIDEOJUEGO_H_INCLUDED
