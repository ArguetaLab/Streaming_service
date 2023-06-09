#ifndef CAPITULO_H_INCLUDED
#define CAPITULO_H_INCLUDED

/*
En esta clase, vamos a poner los atributos y los métodos a usar.
*/

class Capitulo{
    private:
        float lenghtCap;
        string nameCap;
    public:

        /*
        Primero creamos el constructor vacío y posteriormente el constructor con 2 variables que va a tomar en cuenta
        Luego de crear el constructor vamos a reescribir el método reproducir() el cual pertenece a nuestra clase abstracta Contenido
        El método getNombre nos regresará el nombre del objeto capitulo
        */

        Capitulo();
        Capitulo(string,float);

        string reproducir();
        string getNombre();
};

#endif // CAPITULO_H_INCLUDED
