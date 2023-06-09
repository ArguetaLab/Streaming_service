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

// En este apartado vamos a inicializar nuestros atributos de nombre, contraseña y tipo de cuenta

void Usuario::inicioSesion(string i){
    nombre_U = i;
}

void Usuario::contrasena(string i){
    pin = i;
}

void Usuario::tipoDeCuenta(string i){
    tipo_cuenta = i;
}

// En este apartado crearemos el track que nos ayudará a buscar por todo el archivo de texto, nuestra cuenta
// La razón por la que se hace en modo de frase el método de búsqueda, es para facilitarle al programa la tarea de buscar nuestra cuenta, dato por dato

void Usuario::creaTracker(){
    track = nombre_U+"/"+pin+"/"+tipo_cuenta;
}

/*
En este método, vamos a crear 2 tipos de archivo, uno va a ser en modo lectura y otro en modo escritura.
En el while lo que va a ser es buscar linea por linea el track:
    + si lo encuentra mandará un mensaje de que la cuenta ha sido encontrada
    + si no la encuentra, mandará un mensaje y creará la cuenta
*/

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
