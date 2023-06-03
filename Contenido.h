#ifndef CONTENIDO_H_INCLUDED
#define CONTENIDO_H_INCLUDED
using namespace std;

class Contenido{
private:
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
};

#endif // CONTENIDO_H_INCLUDED
