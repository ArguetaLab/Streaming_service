#include <iostream>
#include <fstream>
#include <vector>
#include "Serie.h"

using namespace std;

Serie::Serie(string _ID,string _name,int _rating, string _genre, float _lenght, vector<Capitulo> episodios):Contenido(_ID, _name, _rating, _genre, _lenght){
EP = episodios;
}
string Serie::muestraContenido(){
    string mensaje;
    mensaje = "=========================================== \n+ ID: " + this->getID() + "\n+ Nombre: " + this->getName() + "\n+ Duración: " + to_string(this->getLenght()) + "\n+ Genero: " + this->getGenre() + "\n+ Rating: " + to_string(this->getRating())+"\n";
    return mensaje;
}
string Serie::reproducir(){
    string mensaje2;
    mensaje2 = "Reproduciendo...";
    return mensaje2;
}
vector<Capitulo> Serie::getCapitulos(){
return EP;
}

