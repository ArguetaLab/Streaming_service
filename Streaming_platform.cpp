#include <iostream>
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
    void muestraContenido();
    string reproducir(string);
};
Contenido::Contenido(){
    name = "";
    genre = "";
    rating = 0;
    ID = "";
    lenght = 0;
}

Contenido::Contenido(string _name, string _genre, int _rating, string _ID, float _lenght){
    name = _name;
    genre = _genre;
    rating = _rating;
    ID = _ID;
    lenght = _lenght;
}
void Contenido::muestraContenido(){
    cout<<"==========================================="<<endl;
    cout<<"+ ID: "<<ID<<endl;
    cout<<"+ Nombre: "<<name<<endl;
    cout<<"+ Duración: "<<lenght<<endl;
    cout<<"+ Genero: "<<genre<<endl;
    cout<<"+ Rating (⭐⭐⭐⭐⭐): "<<rating<<endl;
}
string Contenido::reproducir(string _name){
    string repro = "Reproduciendo " + _name + "...";
    return repro;
}
// =============== CLASE DE USUARIO =======================

class Usuario{
private:
    string nombre_U;
    int pin;
    string tipo_cuenta;

public:
    Usuario(string,int,string);
    void tipoDeCuenta(string);
    void inicioSesion(string);
    void contrasena(int);
};

Usuario::Usuario(string _nombre_U, int _pin, string _tipo_cuenta){
nombre_U = _nombre_U;
pin = _pin;
tipo_cuenta = _tipo_cuenta;
}
void Usuario::inicioSesion(string i){
    nombre_U = i;
}

void Usuario::contrasena(int i){
    pin = i;
}

void Usuario::tipoDeCuenta(string i){
    tipo_cuenta = i;
}

// =============== CLASE DE PELICULA =======================
class Pelicula:Contenido{
private:
public:
    Pelicula(string,string,int,string,float);
    void muestraContenido();
    string reproducir(string);
};

Pelicula::Pelicula(string _name, string _genre, int _rating, string _ID,float _lenght):Contenido(_name, _genre, _rating, _ID, _lenght){
}

void Pelicula::muestraContenido(){
//DESAROLLO
}

// =============== CLASE DE VIDEO JUEGOS =======================
class VideoJuego:Contenido{
private:
public:
    VideoJuego(string,string,int,string,float);
    void muestraContenido();
    string reproducir(string);
};

VideoJuego::VideoJuego(string _name, string _genre, int _rating, string _ID,float _lenght):Contenido(_name, _genre, _rating, _ID, _lenght){
}
void VideoJuego::muestraContenido(){
//DESAROLLO
}
// =============== CLASE CAPITULOS(COMPOSICIÓN) =======================

class Capitulos{
private:
    float lenghtCap;
    string nameCap;
public:
    Capitulos();
    Capitulos(string,float);
    void reproducir();
};
Capitulos::Capitulos(){
}

Capitulos::Capitulos(string _nameCap, float _lenghtCap){
nameCap = _nameCap;
lenghtCap = _lenghtCap;
}
// =============== CLASE DE SERIE =======================

class Serie:public Contenido{

private:
    //int capitulos;

public:
   Serie(string,string,int, string,float);
   void muestraContenido();
   string reproducir(string);
};

Serie::Serie(string _ID,string _name,int _rating, string _genre, float _lenght):Contenido(_ID, _name, _rating, _genre, _lenght){
Capitulos c1 = Capitulos();
}
void Serie::muestraContenido(){
muestraContenido();
}

// ==================== FUNCIÓN MAIN =========================

int main(){
int sigue = 1;
while(sigue == 1){
    int respuesta;
    string seleccion;
    string n = "";
    int p = 0;
    string tc = "";

    cout<<"Bienvenido al Servicio de Streaming Z.O.O"<<endl;
    Usuario u1 = Usuario(n,p,tc);
    cout<<"Por favor introduzca su cuenta: ";
    cin>>n;
    u1.inicioSesion(n);
    cout<<"Introduzca su contraseña: ";
    cin>>p;
    u1.contrasena(p);
    cout<<"Antes de comenzar, por favor indique qué tipo de cuenta posee (Kinds/Adulto): ";
    cin>> tc;
    u1.tipoDeCuenta(tc);

    if(tc == "Kids"){
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de Video Juegos, teclee 3"<<endl;
        cin>>respuesta;

        if(respuesta==1){
        Pelicula p1 = Pelicula("A27", "Bambi", 1.30, "Animada", 4.5);
        Pelicula p2 = Pelicula("B36", "Pinocho", 2.00, "Animada", 4);
        Pelicula p3 = Pelicula("C36", "La bella y la bestia", 1.36, "Animada", 5);
        Pelicula p4 = Pelicula("D45", "Star Wars Ep.4", 2.22, "Ciencia Ficción", 4);
        Pelicula p5 = Pelicula("S22", "Star Wars Ep.5", 2.00, "Ciencia Ficción", 5);
        Pelicula p6 = Pelicula("B24", "Barbie y el castillo diamante", 1.30, "Aventuras", 5);

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
        cin>>seleccion;
    }
    }
    if(tc=="Adulto"){
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de Video Juegos, teclee 3"<<endl;
        cin>>respuesta;

        if(respuesta==1){
        Pelicula p1 = Pelicula("A15", "Star Wars Ep.1", 2.13, "Ciencia Ficción", 3);
        Pelicula p2 = Pelicula("B18", "Star Wars Ep.2", 2.20, "Ciencia Ficción", 4);
        Pelicula p3 = Pelicula("C36", "Star Wars Ep.3", 2.36, "Ciencia Ficción", 5);
        Pelicula p4 = Pelicula("D45", "Star Wars Ep.4", 2.22, "Ciencia Ficción", 4);
        Pelicula p5 = Pelicula("S22", "Star Wars Ep.5", 2.00, "Ciencia Ficción", 5);
        Pelicula p6 = Pelicula("A07", "Quien &%/)& son los Millers", 1.40, "Comedia", 3.5);

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
        cin>>seleccion;
    }

        }
}
return 0;
}
