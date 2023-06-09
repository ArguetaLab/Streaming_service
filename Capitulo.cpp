#include <iostream>
#include <fstream>
#include <vector>
#include "Capitulo.h"

using namespace std;
/*
En este apartado colocamos el contenido de cada método
    + En los constructores vamos a inicializar los atributos
    + En getNombre() nos va a regresar el atributo nameCap
    + En reproducir nos va a regresar un mensaje donde indique que se está reproduciendo un contenido
*/
Capitulo::Capitulo(){
}

Capitulo::Capitulo(string _nameCap, float _lenghtCap){
    nameCap = _nameCap;
    lenghtCap = _lenghtCap;
}
string Capitulo::getNombre(){
    return nameCap;
}
string Capitulo::reproducir(){
    string msg = "Reproduciendo episodio "+this->getNombre();
    return msg;
}
