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

string Usuario::buscarTracker(){
    creaTracker();
    ifstream archivoLectura("file.txt");
    ofstream archivoEscritura("file.txt", ios::out | ios::app);
    string linea;
    bool encontrado = false;
    string msg;

    while(getline(archivoLectura, linea)) {
        if (linea == track) {
            encontrado = true;
            break;
        }
    }
    if(encontrado) {
        msg = "Su cuenta ha sido encontrada, iniciando sesion...";
    }
    else {
        archivoEscritura << track;
        archivoEscritura << "\n";
        msg = "Cuenta no creada, creando cuenta...";
    }
    archivoLectura.close();
    archivoEscritura.close();
    return msg;
}
