#ifndef VIDEOJUEGO_H_INCLUDED
#define VIDEOJUEGO_H_INCLUDED
#include "Contenido.h"

// En este apartado estamos creando la clase VideoJuego, la cual no tendrá atributos ya que todos los hereda al igual que sus métodos

class VideoJuego:public Contenido{
private:
public:
    VideoJuego();
    VideoJuego(string,string,int,string,float);
    string muestraContenido() override;
    string reproducir() override;
};

#endif // VIDEOJUEGO_H_INCLUDED
