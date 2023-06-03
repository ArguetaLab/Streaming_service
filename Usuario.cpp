#include <iostream>
#include <fstream>
#include <vector>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(){
}

Usuario::Usuario(string _nombre_U, string _pin, string _tipo_cuenta,string _track){
nombre_U = _nombre_U;
pin = _pin;
tipo_cuenta = _tipo_cuenta;
track = _track;
}
void Usuario::inicioSesion(string i){
    nombre_U = i;
}

void Usuario::contrasena(string i){
    pin = i;
}

void Usuario::tipoDeCuenta(string i){
    tipo_cuenta = i;
}

void Usuario::creaTracker(){
    track = nombre_U+"/"+pin+"/"+tipo_cuenta;
}

void Usuario::creaArchivo(){
archivo.open("baseDatos.txt", ios::app);
}

string Usuario::buscarTracker(){
    creaTracker();
    creaArchivo();
    string mensaje;
    string linea;

    while(getline(archivo,linea)){
        if(linea == track){
            mensaje = "Usuario encontrado, iniciando sesion...";
        }
        else{
            mensaje = "Usuario no encontrado, creando esta cuenta...";
            archivo<<track;
        }
    }
    archivo.close();
    return mensaje;
}
