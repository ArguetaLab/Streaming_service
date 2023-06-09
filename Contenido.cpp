#include <iostream>
#include <fstream>
#include <vector>
#include "Contenido.h"

using namespace std;

// En este apartado solo creamos el contenido de cada método de nuestra clase

Contenido::Contenido(){
    name = "";
    genre = "";
    rating = 0;
    ID = "";
    lenght = 0;
}

Contenido::Contenido(string _name, string _genre, int _rating, string _ID, float _lenght){
    name = _name;
    genre = _genre;
    rating = _rating;
    ID = _ID;
    lenght = _lenght;
}

string Contenido::getGenre(){
    return genre;
}
string Contenido::getID(){
    return ID;
}
float Contenido::getLenght(){
    return lenght;
}
string Contenido::getName(){
    return name;
}
int Contenido::getRating(){
    return rating;
}

void Contenido::setGenre(string _genre){
    genre = _genre;
}

void Contenido::setID(string _ID){
    ID = _ID;
}
void Contenido::setLenght(float _lenght){
    lenght = _lenght;
}
void Contenido::setName(string _name){
    name = _name;
}
void Contenido::setRating(int _rating){
    rating = _rating;
}

// Con esto vamos a declarar la sobre carga de operadores

ostream& operator<<(ostream& cout, Contenido& contenido) {
    cout << contenido.muestraContenido();
    return cout;
}

