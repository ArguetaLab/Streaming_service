#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

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
