#include <iostream>
#include <fstream>
#include <vector>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula(string _name, string _genre, int _rating, string _ID,float _lenght):Contenido(_name, _genre, _rating, _ID, _lenght){
}

string Pelicula::muestraContenido(){
    string mensaje;
    mensaje = "=========================================== \n+ ID: " + getID() + "\n+ Nombre: " + getName() + "\n+ Duración: " + to_string(getLenght()) + "\n+ Genero: " + getGenre() + "\n+ Rating: " + to_string(getRating())+"\n";
    return mensaje;
}
string Pelicula::reproducir(){
    string mensaje;
    mensaje = "Reproduciendo " + getName()+"...";
    return mensaje;
}

