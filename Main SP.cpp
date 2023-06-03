#include <iostream>
#include <fstream>
#include <vector>
#include "Contenido.cpp"
#include "Usuario.cpp"
#include "Pelicula.cpp"
#include "VideoJuego.cpp"
#include "Capitulo.cpp"
#include "Serie.cpp"

using namespace std;

// ==================== FUNCIÓN MAIN =========================

int main(){
int sigue = 1;
while(sigue == 1){
    int respuesta;
    string seleccion;
    string n = "";
    string p = "";
    string tc = "";
    string busca;

    cout<<"\n";
    cout<<"Bienvenido al Servicio de Streaming Z.O.O"<<endl;
    Usuario u1 = Usuario();
    cout<<"Por favor introduzca su cuenta: ";
    cin>>n;
    u1.inicioSesion(n);
    cout<<"Introduzca su contraseña: ";
    cin>>p;
    u1.contrasena(p);
    cout<<"Antes de comenzar, por favor indique qué tipo de cuenta posee (Kinds/Adulto): ";
    cin>> tc;
    u1.tipoDeCuenta(tc);

    //================================= OPCIÓN KIDS ==================================

    if(tc == "Kids"){
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de video juegos, teclee 3"<<endl;
        cin>>respuesta;

        if(respuesta==1){
        Pelicula p1 = Pelicula("Bambi", "Animada", 4, "A27", 1.30);
        Pelicula p2 = Pelicula("Pinocho", "Animada", 4, "B36", 2.00);
        Pelicula p3 = Pelicula("La bella y la bestia", "Animada", 5, "LP4", 1.37);
        Pelicula p4 = Pelicula("Star Wars Ep.4", "Ciencia Ficción", 4, "SW4", 2.22);
        Pelicula p5 = Pelicula("Star Wars Ep.5", "Ciencia Ficción", 4, "SW5", 2.30);
        Pelicula p6 = Pelicula("Barbie y el castillo diamante", "Aventuras", 5, "BC1", 1.20);

        cout<<p1.muestraContenido();
        cout<<p2.muestraContenido();
        cout<<p3.muestraContenido();
        cout<<p4.muestraContenido();
        cout<<p5.muestraContenido();
        cout<<p5.muestraContenido();
        cout<<p6.muestraContenido();

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
        cin>>seleccion;

        if(seleccion == p1.getID()){
            cout<<p1.reproducir();
        }

        if(seleccion == p2.getID()){
            cout<<p2.reproducir();
        }

        if(seleccion == p3.getID()){
            cout<<p3.reproducir();
        }

        if(seleccion == p4.getID()){
            cout<<p4.reproducir();
        }

        if(seleccion == p5.getID()){
            cout<<p5.reproducir();
        }

        if(seleccion == p6.getID()){
            cout<<p6.reproducir();
        }
    }
    if(respuesta == 2){
        // ====== CONTENIDO SERIE 1 ==========

        Capitulo c1 = Capitulo("Ep.1 Conoce a la familia Pig",23.00);
        Capitulo c2 = Capitulo("Ep.2 Mi mejor amiga",22.00);
        Capitulo c3 = Capitulo("Ep.3 Mi hermano",30.00);

        vector<Capitulo> episodios;
        episodios.push_back(c1);
        episodios.push_back(c2);
        episodios.push_back(c3);

        Serie S1 = Serie("Pepa Pig", "Animado", 5, "PP21", 10.00, episodios);
        vector<Capitulo> epi = S1.getCapitulos();

        // ====== CONTENIDO SERIE 2 ==========

        Capitulo c4 = Capitulo("Ep.1 Mis amigos",23.00);
        Capitulo c5 = Capitulo("Ep.2 Mi casa",22.00);
        Capitulo c6 = Capitulo("Ep.3 Fiesta",30.00);
        Capitulo c7 = Capitulo("Ep.4 Mi mascota",32.00);

        vector<Capitulo> episodios2;
        episodios2.push_back(c4);
        episodios2.push_back(c5);
        episodios2.push_back(c6);
        episodios2.push_back(c7);

        Serie S2 = Serie("Pocoyo", "Animado", 4, "PC12", 5.00, episodios2);
        vector<Capitulo> epi2 = S2.getCapitulos();

        cout<<S1.muestraContenido();
        cout<<S2.muestraContenido();

        cout<<"\nSeleccione la serie que le gustaría ver: "<<endl;
        cin>>seleccion;

        if(seleccion==S1.getID()){
            for(int i = 0; i < epi.size();i++){
                int y = i +1;
                cout<<y<<")"<<epi[i].getNombre()<<endl;
            }
        }

        if(seleccion==S2.getID()){
            for(int i = 0; i < epi2.size();i++){
                int y = i +1;
                cout<<y<<")"<<epi2[i].getNombre()<<endl;
            }
        }
    }
    if(respuesta == 3){
        VideoJuego v1 = VideoJuego("Mario Bros", "Accion", 4, "MB64", 40.00);
        VideoJuego v2 = VideoJuego("El Chavo del ocho", "Comedia", 3, "LC8", 50.00);
        VideoJuego v3 = VideoJuego("Mario Kart", "Accion", 5, "MK23", 20.00);
        VideoJuego v4 = VideoJuego("Zelda", "Accion", 5, "TLOFZ", 30.00);
        VideoJuego v5 = VideoJuego("Stardew Valley", "Animado", 4, "SV23", 15.00);
        VideoJuego v6 = VideoJuego("Minecraft", "Accion", 5, "MC472", 34.00);

        cout<<v1.muestraContenido();
        cout<<v2.muestraContenido();
        cout<<v3.muestraContenido();
        cout<<v4.muestraContenido();
        cout<<v5.muestraContenido();
        cout<<v5.muestraContenido();
        cout<<v6.muestraContenido();

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de Video Juegos"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID del Video Juego: ";
        cin>>seleccion;

        if(seleccion == v1.getID()){
            cout<<v1.reproducir();
        }

        if(seleccion == v2.getID()){
            cout<<v2.reproducir();
        }

        if(seleccion == v3.getID()){
            cout<<v3.reproducir();
        }

        if(seleccion == v4.getID()){
            cout<<v4.reproducir();
        }

        if(seleccion == v5.getID()){
            cout<<v5.reproducir();
        }

        if(seleccion == v6.getID()){
            cout<<v6.reproducir();
        }
    }
    }

    //================================= OPCIÓN ADULTO ==================================

    if(tc=="Adulto"){
        cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
        cout<<" + Si deseas ver nuestro catálogo de video juegos, teclee 3"<<endl;
        cin>>respuesta;

        if(respuesta==1){
        Pelicula p1 = Pelicula("Hunger Games", "Acción", 4, "HG53", 1.50);
        Pelicula p2 = Pelicula("Destino final 1", "Gore", 3, "DF37", 2.00);
        Pelicula p3 = Pelicula("Destino final 2", "Gore", 5, "DF22", 1.37);
        Pelicula p4 = Pelicula("Star Wars Ep.4", "Ciencia Ficción", 4, "SW4", 2.22);
        Pelicula p5 = Pelicula("Star Wars Ep.5", "Ciencia Ficción", 4, "SW5", 2.30);
        Pelicula p6 = Pelicula("Viernes 13", "Terror", 5, "Vv13", 1.20);

        cout<<p1.muestraContenido();
        cout<<p2.muestraContenido();
        cout<<p3.muestraContenido();
        cout<<p4.muestraContenido();
        cout<<p5.muestraContenido();
        cout<<p5.muestraContenido();
        cout<<p6.muestraContenido();

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
        cin>>seleccion;

        if(seleccion == p1.getID()){
            cout<<p1.reproducir();
        }

        if(seleccion == p2.getID()){
            cout<<p2.reproducir();
        }

        if(seleccion == p3.getID()){
            cout<<p3.reproducir();
        }

        if(seleccion == p4.getID()){
            cout<<p4.reproducir();
        }

        if(seleccion == p5.getID()){
            cout<<p5.reproducir();
        }

        if(seleccion == p6.getID()){
            cout<<p6.reproducir();
        }
    }
    if(respuesta == 2){
        // ====== CONTENIDO SERIE 1 ==========

        Capitulo c1 = Capitulo("Ep.1 El comienzo",23.00);
        Capitulo c2 = Capitulo("Ep.2 Pelea",22.00);
        Capitulo c3 = Capitulo("Ep.3 Fin",30.00);

        vector<Capitulo> episodios;
        episodios.push_back(c1);
        episodios.push_back(c2);
        episodios.push_back(c3);

        Serie S1 = Serie("The last of us", "Accion", 5, "HO232", 20.00, episodios);
        vector<Capitulo> epi = S1.getCapitulos();

        // ====== CONTENIDO SERIE 2 ==========

        Capitulo c4 = Capitulo("Ep.1 Una nueva amistad",23.00);
        Capitulo c5 = Capitulo("Ep.2 Comida familiar",22.00);
        Capitulo c6 = Capitulo("Ep.3 La verdad",30.00);
        Capitulo c7 = Capitulo("Ep.4 La dualidad",32.00);

        vector<Capitulo> episodios2;
        episodios2.push_back(c4);
        episodios2.push_back(c5);
        episodios2.push_back(c6);
        episodios2.push_back(c7);

        Serie S2 = Serie("El engaño de mi esposa", "Drama", 4, "EEDM", 15.00, episodios2);
        vector<Capitulo> epi2 = S2.getCapitulos();

        cout<<S1.muestraContenido();
        cout<<S2.muestraContenido();

        cout<<"\nSeleccione la serie que le gustaría ver: "<<endl;
        cin>>seleccion;

        if(seleccion==S1.getID()){
            for(int i = 0; i < epi.size();i++){
                int y = i +1;
                cout<<y<<")"<<epi[i].getNombre()<<endl;
            }
        }

        if(seleccion==S2.getID()){
            for(int i = 0; i < epi2.size();i++){
                int y = i +1;
                cout<<y<<")"<<epi2[i].getNombre()<<endl;
            }
        }

    }
    if(respuesta == 3){
        VideoJuego v1 = VideoJuego("The Last of Us", "Accion", 4, "TLOF", 40.00);
        VideoJuego v2 = VideoJuego("Gears of war", "Accion", 5, "GOW62", 50.00);
        VideoJuego v3 = VideoJuego("Call of Duty", "Accion", 5, "COD2", 20.00);
        VideoJuego v4 = VideoJuego("DOOM", "Accion/Gore", 5, "DE23", 50.00);
        VideoJuego v5 = VideoJuego("Stardew Valley", "Animado", 4, "SV23", 15.00);
        VideoJuego v6 = VideoJuego("Minecraft", "Accion", 5, "MC472", 34.00);

        cout<<v1.muestraContenido();
        cout<<v2.muestraContenido();
        cout<<v3.muestraContenido();
        cout<<v4.muestraContenido();
        cout<<v5.muestraContenido();
        cout<<v5.muestraContenido();
        cout<<v6.muestraContenido();

        cout<<"\n"<<endl;
        cout<<"Este sería todo nuestro catálogo disponible para la sección de Video Juegos"<<endl;
        cout<<"Para seleccionar una pelicula por favor introduzca el ID del Video Juego: ";
        cin>>seleccion;

        if(seleccion == v1.getID()){
            cout<<v1.reproducir();
        }

        if(seleccion == v2.getID()){
            cout<<v2.reproducir();
        }

        if(seleccion == v3.getID()){
            cout<<v3.reproducir();
        }

        if(seleccion == v4.getID()){
            cout<<v4.reproducir();
        }

        if(seleccion == v5.getID()){
            cout<<v5.reproducir();
        }

        if(seleccion == v6.getID()){
            cout<<v6.reproducir();
        }
    }
    }
}

return 0;
}
