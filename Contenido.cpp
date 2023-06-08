#include <iostream>
#include <fstream>
#include <vector>
#include "Contenido.h"

using namespace std;

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
ostream& operator<<(ostream& cout, Contenido& contenido) {
    cout << contenido.muestraContenido();
    return cout;
}

