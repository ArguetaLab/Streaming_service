#include <iostream>
#include <fstream>
#include <vector>
#include "Serie.h"

using namespace std;

Serie::Serie(string _ID,string _name,int _rating, string _genre, float _lenght, vector<Capitulo> episodios):Contenido(_ID, _name, _rating, _genre, _lenght){
vect = episodios;
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
return vect;
}

void Serie::reproducir(int episodio){
    //Esto es para ahorrarnos lineas de código extra, en lugar de poner varios if, solo ponemos un while

    while(episodio < 1 || episodio > sizeof(vect)){
        cout<<"Esta serie contiene un total de: "<<to_string(sizeof(vect))<<"ingrese el número de episodio que desea ver: ";
        cin>>episodio;
    }
    cout<<"Reproduciendo episodio "<<to_string(episodio)<<endl;
}
