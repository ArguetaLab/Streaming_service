#include <iostream>
#include <fstream>
#include <vector>
#include "VideoJuego.h"

using namespace std;

VideoJuego::VideoJuego(string _name, string _genre, int _rating, string _ID,float _lenght):Contenido(_name, _genre, _rating, _ID, _lenght){
}
string VideoJuego::muestraContenido(){
    string mensaje;
    mensaje = "=========================================== \n+ ID: " + this->getID() + "\n+ Nombre: " + this->getName() + "\n+ Duración: " + to_string(this->getLenght()) + "\n+ Genero: " + this->getGenre() + "\n+ Rating: " + to_string(this->getRating())+"\n";
    return mensaje;
}
string VideoJuego::reproducir(){
    string mensaje;
    mensaje = "Reproduciendo "+this->getName()+"...";
    return mensaje;
}
