#include <iostream>
#include <fstream>
#include <vector>
#include "Capitulo.h"

using namespace std;

Capitulo::Capitulo(){

}

Capitulo::Capitulo(string _nameCap, float _lenghtCap){
nameCap = _nameCap;
lenghtCap = _lenghtCap;
}
string Capitulo::getNombre(){
return nameCap;
}
void Capitulo::reproducir(){
cout<<"Reproduciendo episodio "<<this->getNombre()<<endl;
}
