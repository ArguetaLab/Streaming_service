
/*
En esta parte del código importamos las respectivas librerías que vamos a usar.
Aparte de añadir los .cpp de todos los archivos que vamos a usar en el main()

*/
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
    /*
    En este apartado lo que vamos a realizar en el main es crear un bucle el cual solo será interrumpido si el usuario ya no desea seguir usando el servicio de streaming.
    Posteriormente creamos un vector de apuntadores de nuestra clase Contenido, el cual se va a llamar contenidos. En este vamos a añadir elementos de tipo Pelicula, Serie y VideoJuego.
    */
    int sigue = 1;
    vector<Contenido *> contenidos;

    contenidos.push_back(new Pelicula("Bambi", "Animada", 4, "A27", 1.30));
    contenidos.push_back(new Pelicula("Pinocho", "Animada", 4, "B36", 2.00));
    contenidos.push_back(new Pelicula("La bella y la bestia", "Animada", 5, "LP4", 1.37));
    contenidos.push_back(new Pelicula("Star Wars Ep.4", "Ciencia Ficción", 4, "SW4", 2.22));
    contenidos.push_back(new Pelicula("Star Wars Ep.5", "Ciencia Ficción", 4, "SW5", 2.30));
    contenidos.push_back(new Pelicula("Barbie y el castillo diamante", "Aventuras", 5, "BC1", 1.20));
    contenidos.push_back(new VideoJuego("Mario Bros", "Accion", 4, "MB64", 40.00));
    contenidos.push_back(new VideoJuego("El Chavo del ocho", "Comedia", 3, "LC8", 50.00));
    contenidos.push_back(new VideoJuego("Mario Kart", "Accion", 5, "MK23", 20.00));
    contenidos.push_back(new VideoJuego("Zelda", "Accion", 5, "TLOFZ", 30.00));
    contenidos.push_back(new VideoJuego("Stardew Valley", "Animado", 4, "SV23", 15.00));
    contenidos.push_back(new VideoJuego("Minecraft", "Accion", 5, "MC472", 34.00));
    contenidos.push_back(new Pelicula("Hunger Games", "Acción", 4, "HG53", 1.50));
    contenidos.push_back(new Pelicula("Destino final 1", "Gore", 3, "DF37", 2.00));
    contenidos.push_back(new Pelicula("Destino final 2", "Gore", 5, "DF22", 1.37));
    contenidos.push_back(new Pelicula("Star Wars Ep.4", "Ciencia Ficción", 4, "SW4", 2.22));
    contenidos.push_back(new Pelicula("Star Wars Ep.5", "Ciencia Ficción", 4, "SW5", 2.30));
    contenidos.push_back(new Pelicula("Viernes 13", "Terror", 5, "Vv13", 1.20));
    contenidos.push_back(new VideoJuego("The Last of Us", "Accion", 4, "TLOF", 40.00));
    contenidos.push_back(new VideoJuego("Gears of war", "Accion", 5, "GOW62", 50.00));
    contenidos.push_back(new VideoJuego("Call of Duty", "Accion", 5, "COD2", 20.00));
    contenidos.push_back(new VideoJuego("DOOM", "Accion/Gore", 5, "DE23", 50.00));
    contenidos.push_back(new VideoJuego("Stardew Valley", "Animado", 4, "SV23", 15.00));
    contenidos.push_back(new VideoJuego("Minecraft", "Accion", 5, "MC472", 34.00));

    /*
    Para añadir los objetos Capitulo a Serie, lo que vamos a hacer es ocupar DOWN CASTING.
    Primero vamos a crear 3 objetos de tipo Capitulo, posteriormente creamos un vector de tipo Capitulo llamado episodios y vamos a añadir nuestros 3 objetos creados al vector.
    Una vez añadidos, añadiremos a nuestro vector contenidos un objeto nuevo de tipo Serie, el cual va a tener de atributos su nombre, género, rating, ID y el vector episodios.
    Esto con el fin de que nuestros objetos Capitulos sean propiamente parte de nuestro objeto Serie. De acuerdo a nuestro diagrama UML, estaríamos trabajando con agregación.

    Este proceso se realizará a todos los objetos de tipo Serie y Capitulo.
    */

    //================ Serie 1 ==================

    Capitulo c1 = Capitulo("Ep.1 Conoce a la familia Pig", 23.00);
    Capitulo c2 = Capitulo("Ep.2 Mi mejor amiga", 22.00);
    Capitulo c3 = Capitulo("Ep.3 Mi hermano", 30.00);

    vector<Capitulo> episodios;
    episodios.push_back(c1);
    episodios.push_back(c2);
    episodios.push_back(c3);

    contenidos.push_back(new Serie("Pepa Pig", "Animado", 5, "PP21", 10.00, episodios));

    // Realizar casting dinámico al tipo Serie
    Serie* seriePtr = dynamic_cast<Serie*>(contenidos[24]);

    //================ Serie 2 ===================

    Capitulo c4 = Capitulo("Ep.1 Mis amigos",23.00);
    Capitulo c5 = Capitulo("Ep.2 Mi casa",22.00);
    Capitulo c6 = Capitulo("Ep.3 Fiesta",30.00);
    Capitulo c7 = Capitulo("Ep.4 Mi mascota",32.00);

    vector<Capitulo> episodios2;
    episodios2.push_back(c4);
    episodios2.push_back(c5);
    episodios2.push_back(c6);
    episodios2.push_back(c7);

    contenidos.push_back(new Serie("Pocoyo", "Animado", 4, "PC12", 5.00, episodios2));
    Serie* seriePtr2 = dynamic_cast<Serie*>(contenidos[25]);

    //================ Serie 3 ====================

    Capitulo c8 = Capitulo("Ep.1 Patricio estrella",20.00);
    Capitulo c9 = Capitulo("Ep.2 El nuevo Krustaseo",24.00);
    Capitulo c10 = Capitulo("Ep.3 Calamardo",32.00);
    Capitulo c11 = Capitulo("Ep.4 Gary vuelve a casa",31.00);

    vector<Capitulo> episodios3;
    episodios3.push_back(c8);
    episodios3.push_back(c9);
    episodios3.push_back(c10);
    episodios3.push_back(c11);

    contenidos.push_back(new Serie("Bob Esponja", "Animado", 5, "BEP12", 5.00, episodios3));
    Serie* seriePtr3 = dynamic_cast<Serie*>(contenidos[26]);

    //================ Serie 4 ====================

    Capitulo c12 = Capitulo("Ep.1 El comienzo",23.00);
    Capitulo c13 = Capitulo("Ep.2 Pelea",22.00);
    Capitulo c14 = Capitulo("Ep.3 Fin",30.00);

    vector<Capitulo> episodios4;
    episodios4.push_back(c12);
    episodios4.push_back(c13);
    episodios4.push_back(c14);

    contenidos.push_back(new Serie("The last of us", "Accion", 5, "HO232", 20.00, episodios4));
    Serie* seriePtr4 = dynamic_cast<Serie*>(contenidos[27]);

    //================ Serie 5 ====================

    Capitulo c15 = Capitulo("Ep.1 Una nueva amistad",23.00);
    Capitulo c16 = Capitulo("Ep.2 Comida familiar",22.00);
    Capitulo c17 = Capitulo("Ep.3 La verdad",30.00);
    Capitulo c18 = Capitulo("Ep.4 La dualidad",32.00);

    vector<Capitulo> episodios5;
    episodios5.push_back(c15);
    episodios5.push_back(c16);
    episodios5.push_back(c17);
    episodios5.push_back(c18);

    contenidos.push_back(new Serie("El engaño de mi esposa", "Drama", 4, "EEDM", 15.00, episodios5));
    Serie* seriePtr5 = dynamic_cast<Serie*>(contenidos[28]);

    //================ Serie 6 ====================

    Capitulo c19 = Capitulo("Ep.1 Conociendo a Larry David",23.00);
    Capitulo c20 = Capitulo("Ep.2 El mejor amigo",22.00);
    Capitulo c21 = Capitulo("Ep.3 Divorcio",30.00);
    Capitulo c22 = Capitulo("Ep.4 Nueva serie",32.00);

    vector<Capitulo> episodios6;
    episodios6.push_back(c19);
    episodios6.push_back(c20);
    episodios6.push_back(c21);
    episodios6.push_back(c22);

    contenidos.push_back(new Serie("Curb Your Enthusiasm", "Comedia", 4, "CYE1", 15.00, episodios6));
    Serie* seriePtr6 = dynamic_cast<Serie*>(contenidos[29]);

    /*
    En este caso en especifico lo que vamos a hacer es crear un objeto llamado v1 es cual va a ser de tipo VideoJuego, el cual su constructor va a estar vacio.
    Para añadir los parámetros de este objeto, lo que vamos a usar es los setters, luego de haber colocado el valor de cada parámetro con los setter, añadimos v1 al vector de contenidos.
    */

    VideoJuego v1 = VideoJuego();
    v1.setID("SLM1");
    v1.setGenre("Terror");
    v1.setLenght(22.00);
    v1.setName("Slender Man");
    v1.setRating(4);
    contenidos.push_back(&v1);

    //================ Ciclo ====================

    while(sigue == 1){
        int respuesta;
        string seleccion;
        string n = "";
        string p = "";
        string tc = "";
        string busca;

        /*
        Ahora vamos a hacer es que nos desplegue en la consola la bienvenida a la plataforma de streaming.
        Otra de las funcionalidades que va a tener esto es que para poder acceder al catálogo, necesitaremos iniciar sesión, esto incluye introducir el usuario, contraseña y tipo de cuenta.
        El catálogo va a depender del tipo de cuenta, ya sea Kids o Adulto.
        En dado caso que la cuenta no exista, lo que hará el programa es que en automático creará la cuenta y la guardará en la base de datos.
        */

        cout<<"\n";
        cout<<"Bienvenido al Servicio de Streaming Z.O.O"<<endl;
        Usuario u1 = Usuario();
        cout<<"Por favor introduzca su cuenta: ";
        cin>>n;
        u1.inicioSesion(n);
        cout<<"Introduzca su contraseña: ";
        cin>>p;
        u1.contrasena(p);
        cout<<"Antes de comenzar, por favor indique qué tipo de cuenta posee (Kids/Adulto): ";
        cin>> tc;
        u1.tipoDeCuenta(tc);

        cout<<u1.buscarTracker()<<endl;


        //================================= OPCIÓN KIDS ==================================

        /*
        Si el tipo de cuenta es Kids va a acceder a lo que esté dentro del if, una vez dentro mostrará un menú en pantalla en donde podrás seleccionar si quieres explorar el catálogo de:
            + Peliculas (si seleccionamos 1)
            + Series (si seleccionamos 2)
            + Video Juegos (si seleccionamos 3)
        */

        if(tc == "Kids"){

            cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de video juegos, teclee 3"<<endl;
            cin>>respuesta;

            if(respuesta==1){

                /*
                Si nuestra elección fue peliculas, se nos deplegará el catálogo de cada uno de los objetos Pelicula. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
                optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto Pelicula.

                Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione una pelicula, el método de seleccion de la película se realizará con tan solo que el usuario introduzca el ID
                es importante escribir bien el ID de la Pelicula, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
                Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)
                Una vez seleccionado el ID correctamente, se mostrará el mensaje de reproduciendo.
                */

                cout << *contenidos[0] << endl;
                cout << *contenidos[1] << endl;
                cout << *contenidos[2] << endl;
                cout << *contenidos[3] << endl;
                cout << *contenidos[4] << endl;
                cout << *contenidos[5] << endl;

                cout<<"\n"<<endl;
                cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
                cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
                cin>>seleccion;

                if(seleccion == contenidos[0]->getID()){
                    cout<<contenidos[0]->reproducir();
                }

                if(seleccion == contenidos[1]->getID()){
                    cout<<contenidos[1]->reproducir();
                }

                if(seleccion == contenidos[2]->getID()){
                    cout<<contenidos[2]->reproducir();
                }

                if(seleccion == contenidos[3]->getID()){
                    cout<<contenidos[3]->reproducir();
                }

                if(seleccion == contenidos[4]->getID()){
                    cout<<contenidos[4]->reproducir();
                }

                if(seleccion == contenidos[5]->getID()){
                    cout<<contenidos[5]->reproducir();
                }
        }

        if(respuesta == 2){

            /*
            Si nuestra elección fue series, se nos deplegará el catálogo de cada uno de los objetos Serie. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
            optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto Serie.

            Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione una serie, el método de seleccion de la serie se realizará con tan solo que el usuario introduzca el ID
            es importante escribir bien el ID de la Serie, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
            Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)

            Una vez escrito bien el ID, se nos mostrará una lista de capitulos dependiendo de cada tipo de serie, luego se le pedirá al usuario que seleccione con el número de capítulo.
            Una vez seleccionado se mostrará el mensaje de reproduciendo.
            */

            vector<Capitulo> epi = seriePtr->getCapitulos();
            vector<Capitulo> epi2 = seriePtr2->getCapitulos();
            vector<Capitulo> epi3 = seriePtr3->getCapitulos();

            cout << *contenidos[24] << endl;
            cout << *contenidos[25] << endl;
            cout << *contenidos[26] << endl;

            cout<<"\nSeleccione la serie que le gustaría ver: "<<endl;
            cin>>seleccion;

            if(seleccion==contenidos[24]->getID()){
                for(int i = 0; i < epi.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c1.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c2.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c3.reproducir()<<endl;
                }
            }

            if(seleccion==contenidos[25]->getID()){
                for(int i = 0; i < epi2.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi2[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c4.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c5.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c6.reproducir()<<endl;
                }
                if(seleccion == "4"){
                    cout<<c7.reproducir()<<endl;
                }
            }

            if(seleccion==contenidos[26]->getID()){
                for(int i = 0; i < epi3.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi3[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c8.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c9.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c10.reproducir()<<endl;
                }
                if(seleccion == "4"){
                    cout<<c11.reproducir()<<endl;
                }
            }

        }

        if(respuesta == 3){

            /*
            Si nuestra elección fue video juegos, se nos deplegará el catálogo de cada uno de los objetos VideoJuego. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
            optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto VideoJuego.

            Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione un video juego, el método de seleccion del video juego se realizará con tan solo que el usuario introduzca el ID
            es importante escribir bien el ID de la Pelicula, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
            Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)
            Una vez seleccionado el ID correctamente, se mostrará el mensaje de reproduciendo.
            */

            cout << *contenidos[6] << endl;
            cout << *contenidos[7] << endl;
            cout << *contenidos[8] << endl;
            cout << *contenidos[9] << endl;
            cout << *contenidos[10] << endl;
            cout << *contenidos[11] << endl;

            cout<<"\n"<<endl;
            cout<<"Este sería todo nuestro catálogo disponible para la sección de Video Juegos"<<endl;
            cout<<"Para seleccionar una pelicula por favor introduzca el ID del Video Juego: ";
            cin>>seleccion;

            if(seleccion == contenidos[6]->getID()){
                cout<<contenidos[6]->reproducir();
            }

            if(seleccion == contenidos[7]->getID()){
                cout<<contenidos[7]->reproducir();
            }

            if(seleccion == contenidos[8]->getID()){
                cout<<contenidos[8]->reproducir();
            }

            if(seleccion == contenidos[9]->getID()){
                cout<<contenidos[9]->reproducir();
            }

            if(seleccion == contenidos[10]->getID()){
                cout<<contenidos[10]->reproducir();
            }

            if(seleccion == contenidos[11]->getID()){
                cout<<contenidos[11]->reproducir();
            }
        }
        }


        //================================= OPCIÓN ADULTO ==================================

        /*
        Si el tipo de cuenta es Adulto va a acceder a lo que esté dentro del if, una vez dentro mostrará un menú en pantalla en donde podrás seleccionar si quieres explorar el catálogo de:
            + Peliculas (si seleccionamos 1)
            + Series (si seleccionamos 2)
            + Video Juegos (si seleccionamos 3)
        */

        if(tc=="Adulto"){

            cout<<"Contamos con un extenso catálogo de Películas y series"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de peliculas, teclee 1"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de series, teclee 2"<<endl;
            cout<<" + Si deseas ver nuestro catálogo de video juegos, teclee 3"<<endl;
            cin>>respuesta;

            if(respuesta==1){

            /*
            Si nuestra elección fue peliculas, se nos deplegará el catálogo de cada uno de los objetos Pelicula. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
            optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto Pelicula.

            Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione una pelicula, el método de seleccion de la película se realizará con tan solo que el usuario introduzca el ID
            es importante escribir bien el ID de la Pelicula, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
            Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)
            Una vez seleccionado el ID correctamente, se mostrará el mensaje de reproduciendo.
            */

            cout << *contenidos[12] << endl;
            cout << *contenidos[13] << endl;
            cout << *contenidos[14] << endl;
            cout << *contenidos[15] << endl;
            cout << *contenidos[16] << endl;
            cout << *contenidos[17] << endl;

            cout<<"\n"<<endl;
            cout<<"Este sería todo nuestro catálogo disponible para la sección de peliculas"<<endl;
            cout<<"Para seleccionar una pelicula por favor introduzca el ID de la película: ";
            cin>>seleccion;

            if(seleccion == contenidos[12]->getID()){
                cout<<contenidos[12]->reproducir();
            }

            if(seleccion == contenidos[13]->getID()){
                cout<<contenidos[13]->reproducir();
            }

            if(seleccion == contenidos[14]->getID()){
                cout<<contenidos[14]->reproducir();
            }

            if(seleccion == contenidos[15]->getID()){
                cout<<contenidos[15]->reproducir();
            }

            if(seleccion == contenidos[16]->getID()){
                cout<<contenidos[16]->reproducir();
            }

            if(seleccion == contenidos[17]->getID()){
                cout<<contenidos[17]->reproducir();
            }
        }

        if(respuesta == 2){

            /*
            Si nuestra elección fue series, se nos deplegará el catálogo de cada uno de los objetos Serie. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
            optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto Serie.

            Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione una serie, el método de seleccion de la serie se realizará con tan solo que el usuario introduzca el ID
            es importante escribir bien el ID de la Serie, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
            Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)

            Una vez escrito bien el ID, se nos mostrará una lista de capitulos dependiendo de cada tipo de serie, luego se le pedirá al usuario que seleccione con el número de capítulo.
            Una vez seleccionado se mostrará el mensaje de reproduciendo.
            */

            vector<Capitulo> epi4 = seriePtr4->getCapitulos();
            vector<Capitulo> epi5 = seriePtr5->getCapitulos();
            vector<Capitulo> epi6 = seriePtr6->getCapitulos();

            cout << *contenidos[27] << endl;
            cout << *contenidos[28] << endl;
            cout << *contenidos[29] << endl;

            cout<<"\nSeleccione la serie que le gustaría ver: "<<endl;
            cin>>seleccion;

            if(seleccion==contenidos[27]->getID()){
                for(int i = 0; i < epi4.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi4[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c12.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c13.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c14.reproducir()<<endl;
                }
            }

            if(seleccion==contenidos[28]->getID()){
                for(int i = 0; i < epi5.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi5[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c15.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c16.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c17.reproducir()<<endl;
                }
                if(seleccion == "4"){
                    cout<<c18.reproducir()<<endl;
                }
            }

            if(seleccion==contenidos[29]->getID()){
                for(int i = 0; i < epi6.size();i++){
                    int y = i +1;
                    cout<<y<<")"<<epi6[i].getNombre()<<endl;
                }
                cout<<"Por favor seleccione un episodio (introduzca el número de episodio): "<<endl;
                cin>>seleccion;

                if(seleccion == "1"){
                    cout<<c19.reproducir()<<endl;
                }
                if(seleccion == "2"){
                    cout<<c20.reproducir()<<endl;
                }
                if(seleccion == "3"){
                    cout<<c21.reproducir()<<endl;
                }
                if(seleccion == "4"){
                    cout<<c22.reproducir()<<endl;
                }
            }

        }

        if(respuesta == 3){

            /*
            Si nuestra elección fue video juegos, se nos deplegará el catálogo de cada uno de los objetos VideoJuego. Para esto usamos la sobrecarga de operadores, en vez de poner contenidos[0].muestraContenido()
            optamos por sobrecargar el operador << del cout, para que con tan solo poner cout << *contenidos[0] nos imprima el contenido del objeto VideoJuego.

            Una vez mostrado el catálogo, lo que realizaremos ahora es mostrar en pantalla el mensaje pidiendo al usuario que seleccione un video juego, el método de seleccion del video juego se realizará con tan solo que el usuario introduzca el ID
            es importante escribir bien el ID de la Pelicula, ya que esto podría ocacionar que el programa cuente como que no seleccionaste nada y te muestre el mensaje de agradecimiento por usar nuestra plataforma.
            Posteriormente de un mensaje de si queremos continuar usando la plataforma, tendremos que escribir 1 (si queemos seguir usando) o 0 (si queremos salirnos del programa)
            Una vez seleccionado el ID correctamente, se mostrará el mensaje de reproduciendo.
            */

            cout << *contenidos[18] << endl;
            cout << *contenidos[19] << endl;
            cout << *contenidos[20] << endl;
            cout << *contenidos[21] << endl;
            cout << *contenidos[22] << endl;
            cout << *contenidos[23] << endl;
            cout << *contenidos[30] << endl;

            cout<<"\n"<<endl;
            cout<<"Este sería todo nuestro catálogo disponible para la sección de Video Juegos"<<endl;
            cout<<"Para seleccionar una pelicula por favor introduzca el ID del Video Juego: ";
            cin>>seleccion;

            if(seleccion == contenidos[18]->getID()){
                cout<<contenidos[18]->reproducir();
            }

            if(seleccion == contenidos[19]->getID()){
                cout<<contenidos[19]->reproducir();
            }

            if(seleccion == contenidos[20]->getID()){
                cout<<contenidos[20]->reproducir();
            }

            if(seleccion == contenidos[21]->getID()){
                cout<<contenidos[21]->reproducir();
            }

            if(seleccion == contenidos[22]->getID()){
                cout<<contenidos[22]->reproducir();
            }

            if(seleccion == contenidos[23]->getID()){
                cout<<contenidos[23]->reproducir();
            }

            if(seleccion == contenidos[30]->getID()){
                cout<<contenidos[30]->reproducir();
            }
        }
        }

        cout<<"\nEsperemos te haya gustado la experiencia de la Plataforma Z.O.O"<<endl;
        cout<<"Deseas seguir explorando en nuestro catálogo? (Si quieres seguir explorando introduce 1, si deseas finalizar introduce 0) "<<endl;
        cin>>sigue;
    }

    return 0;
}
