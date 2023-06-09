#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

/*
La clase usuario va a ser independiente del resto de clases que tenemos.
Sus atributos van a ser:
    + nombre de usuario
    + contraseña
    + tipo de cuenta
    + track (la cual va a ser un string compuesto por las 3 variables anteriores)
    + declaramos un objeto archivo

En los métodos vamos a crear el constructor vacío y el constructor con parámetros.
Posteriormente inicializamos el resto de métodos.
*/

class Usuario{
    private:
        string nombre_U;
        string pin;
        string tipo_cuenta;
        string track;
        fstream archivo;

    public:
        Usuario();
        Usuario(string,string,string,string);
        void tipoDeCuenta(string);
        void inicioSesion(string);
        void contrasena(string);
        void creaTracker();
        string buscarTracker();
};


#endif // USUARIO_H_INCLUDED
