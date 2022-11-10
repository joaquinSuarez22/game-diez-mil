///librerias

# include <iostream>
# include <cstdlib>
# include <ctime> // srand
# include <stdio.h>
# include <cstring>


//funcion SLEEP()
#include<windows.h>


//enter getch()
#include <conio.h>

//Rlutil
#include "rlutil.h"

// .h

#include "funciones.h"
#include "combinacionesdados.h"

//------------------------------------------//

using namespace std;

///funcion MAIN

int main() {


/*variables*/ int tipo;

//colors
rlutil::setBackgroundColor(rlutil::LIGHTMAGENTA);
rlutil::setColor(rlutil::WHITE);

//nombre programa
system("title JUEGO DIEZ MIL");

//idioma
setlocale(LC_ALL, "Spanish");


//menu

cout<<endl;

    cout <<"\t\t\t\t\t   __  ______  ______  ______  ______ "<<endl;
    cout <<"\t\t\t\t\t  /  |/ __   |/ __   |/ __   |/ __   |"<<endl;
    cout <<"\t\t\t\t\t /_/ | | //| | | //| | | //| | | //| |"<<endl;
    cout <<"\t\t\t\t\t   | | |// | | |// | | |// | | |// | |"<<endl;
    cout <<"\t\t\t\t\t   | |  /__| |  /__| |  /__| |  /__| |"<<endl;
    cout <<"\t\t\t\t\t   |_||_____/ |_____/ |_____/|______/ "<<endl<<endl;
    cout <<endl;
    cout << "\t\t\t\t\t\ 1] \t Juego nuevo para un Jugador"<<endl<<endl;
    cout << "\t\t\t\t\t\ 2] \t Juego nuevo para dos Jugadores"<<endl<<endl;
    cout << "\t\t\t\t\t\ 3] \t Mostrar puntuación más alta"<<endl<<endl;
    cout << "\t\t\t\t\t\ 0] \t Salir del Juego"<<endl<<endl;
    cout<<endl;

    cout<<"\t\t\t\t\t\t\ INGRESE OPCION: ";
    cin>>tipo;

/*nombre*/ string nombreJ1;
           getline(cin,nombreJ1);

//opciones:
switch (tipo){

      case 1: //un Jugador
      system("cls");
      UnJugador();
      break;

      case 2: //Dos Jugadores
      system("cls");
      cout<<"\t\t\t\t\t\ [MODO DOS JUGADORES]";

      break;

      case 3: //Puntuacion + alta
      system("cls");
      cout<<"\t\t\t\t\t\ [PUNTUACION/ES MAS ALTA/S]";

      break;

      case 0: //salir
      system("cls");
      cout<<"\t\t\t\t\t\ [SALIR]";
      break;

      default: //error
          cout<<endl;
           cout << "\t\t\t\ NO ingresaste una opcion valida, porfavor ingrese = '1', '2', '3' o  '0' "<<endl;
       return 0;

  }


 return 0;
}
