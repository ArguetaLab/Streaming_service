#ifndef CONTENIDO_H_INCLUDED
#define CONTENIDO_H_INCLUDED
using namespace std;

/*
Esta será nuestra clase Padre y por lo tanto tambien nuestra clase abstracta.
En la parte de atributos los vamos a poner en modo protected, nuestros atributos vana  ser los básicos que cualquiera de nuestra clase hija debería de tener
    +nombre
    +género
    +rating
    +ID
    +duración
Mientras que en los métodos vamos a crear nuestro constructor vacío, nuestro constructor con nuestros parámetros, los 2 métodos los cuales vamos a usar en cualquier clase hija, los getters y setters
Y para finalizar vamos a inicializar lo que nos va a permitir hacer la sobre carga del operador.
*/

class Contenido{
    protected:
        string name;
        string genre;
        int rating;
        string ID;
        float lenght;

    public:
        Contenido();
        Contenido(string, string, int, string, float);
        virtual string muestraContenido()=0;
        virtual string reproducir()=0;
        string getName();
        string getGenre();
        int getRating();
        string getID();
        float getLenght();

        void setName(string);
        void setGenre(string);
        void setRating(int);
        void setID(string);
        void setLenght(float);

        friend ostream& operator<<(ostream& cout, Contenido& contenido);
};

#endif // CONTENIDO_H_INCLUDED
