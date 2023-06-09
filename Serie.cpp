#include <iostream>
#include <fstream>
#include <vector>
#include "Serie.h"

using namespace std;

Serie::Serie(string _ID,string _name,int _rating, string _genre, float _lenght, vector<Capitulo> episodios):Contenido(_ID, _name, _rating, _genre, _lenght){
EP = episodios;
}

// En este método nosotros vamos a poder imprimir todos los atributos de nuestra clase para posteriormente mostrarselo al usuario

string Serie::muestraContenido(){
    string mensaje;
    mensaje = "=========================================== \n+ ID: " + this->getID() + "\n+ Nombre: " + this->getName() + "\n+ Duración: " + to_string(this->getLenght()) + "\n+ Genero: " + this->getGenre() + "\n+ Rating: " + to_string(this->getRating())+"\n";
    return mensaje;
}

// En este método solo estamos mandando un mensaje donde indica que se está reproduciendo un contenido en especifico

string Serie::reproducir(){
    string mensaje2;
    mensaje2 = "Reproduciendo...";
    return mensaje2;
}

// Este método nos va a retornar el vector con las lista de capítulos que se crea en el main

vector<Capitulo> Serie::getCapitulos(){
return EP;
}

