#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


using namespace std;


///FUNCION - numero aleatorio entre 1 y 6

int num_aleatorio(){

    int num,i;

    srand(time(0));

  num = rand()%6+1;

  system("pause");

  return num;

}

///FUNCION - Lanzar dados
int lanzar_dados(){

int num,i,n;

    cout<<endl<<endl<<endl;

    cout<<"\t presione 1 para lanzar los dados: ";
    cin>>n;

    num = num_aleatorio();

    if(n==1){
        for(i=1;i<=6;i++){

cout<<"\t"<<num<<endl;

    cout<<"\t presione 1 para lanzar los dados: ";

    cin>>n;cout;

    num = num_aleatorio();
    }

}
       system("pause");
       system("cls");
}

//------------------------------------------------------------------------//



/// 1 Jugador

void UnJugador(){

//variables

int PuntajeTotal=0, ronda=1, lanz=0, Puntaje=0, PuntosRonda=0, vcontador[6], vc[10], dado[6], posmax;


 string nombreJ1;

      cout<<endl<<endl<<endl;
      cout<<"\t\t\t\t\t [MODO UN SOLO JUGADOR]"<<endl<<endl;
      cout <<"\t\t\t\t\t Ingrese NOMBRE: ";
      getline(cin,nombreJ1);


      system("cls");

      cout<<endl;
      cout<<"TURNO: "<<nombreJ1<<" |\t";
      cout<<"RONDA N: "<<" |\t";
      cout<<"LANZAMIENTO N: "<<" |\t";
      cout<<"PUNTUACION ACTUAL: "<<" |\t";
      cout<<"PUNTUACION TOTAL: "<<" |\t";

      lanzar_dados();

}



//------------------------------------------------------------------------//



#endif // FUNCIONES_H_INCLUDED
