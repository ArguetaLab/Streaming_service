#ifndef CAPITULO_H_INCLUDED
#define CAPITULO_H_INCLUDED

class Capitulo{
private:
    float lenghtCap;
    string nameCap;
public:
    Capitulo();
    Capitulo(string,float);

    string reproducir();
    string getNombre();
};

#endif // CAPITULO_H_INCLUDED
