#include <iostream>
#include <fstream>
#include <vector>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula(string _name, string _genre, int _rating, string _ID,float _lenght):Contenido(_name, _genre, _rating, _ID, _lenght){
}

// En este método nosotros vamos a poder imprimir todos los atributos de nuestra clase para posteriormente mostrarselo al usuario

string Pelicula::muestraContenido(){
    string mensaje;
    mensaje = "=========================================== \n+ ID: " + getID() + "\n+ Nombre: " + getName() + "\n+ Duración: " + to_string(getLenght()) + "\n+ Genero: " + getGenre() + "\n+ Rating: " + to_string(getRating())+"\n";
    return mensaje;
}

// En este método solo estamos mandando un mensaje donde indica que se está reproduciendo un contenido en especifico

string Pelicula::reproducir(){
    string mensaje;
    mensaje = "Reproduciendo " + getName()+"...";
    return mensaje;
}

