#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


using namespace std;

int i;

///FUNCION - numero aleatorio entre 1 y 6

int num_aleatorio(){

    int num,i;

    srand(time(0));

    num = rand()%6+1;

  return num;

}

///FUNCION - Lanzar dados

int lanzar_dados(){

int num,i,n;

    cout<<endl<<endl<<endl;

    for(i=1;i<=6;i++){

    cout<<"\t presione ENTER para lanzar los dados: "<<endl;
    //cin>>n;
    getch();
    cout<<endl;

    num = num_aleatorio();

    cout<<"\t DADO "<<i<<": "<<num<<endl<<endl;


/* para que espere */  Sleep(700);

      // system("pause");
      // cout<<endl;

    }

       system("pause");
       system("cls");

}



///Poner VECTOR en 0
void v0(int pos[], int tam){

 int i;

 for (i=0;i<tam;i++){
    pos[i]=0;
 }
}


///Mostrar combinaciones en cout
void MostrarCombinaciones(int v[], int posmax, int Puntaje){

    switch(posmax){

        case 0:
        cout<< "\t¡Obtuviste un Juego De Uno! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 1:
        cout<< "\t¡Obtuviste un Juego De Cinco! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 2:
        cout<< "\t¡Obtuviste un Trío de 1! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 3:
        cout<< "\t¡Obtuviste un Trío X++! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 4:
        cout<< "\t¡Obtuviste un Trío de 1 Ampliado! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 5:
        cout<< "\t¡Obtuviste una Escalera Larga! +"<<Puntaje<<" Puntos"<<endl;
        break;

        case 6:
        cout<< "\t¡Obtuviste un Sexteto! +"<<Puntaje<<" Puntos"<<endl;
        break;

        default:
        break;

        }

    }


///Final de ronda/Juego //  Ronda dados


/* void RondaDados (int nombre, int r, int PuntajeTotal){

    cout<<"jugador: "<<nombre;
    cout<<"ronda N: "<<r;
    cout<<"Puntaje Total: "<<PuntajeTotal;

}
*/


///Muestro los Dados
 void MostrarDados(int v[], int tam){

    for (i=0;i<tam;i++){
     cout << v[i] << "\t";
    }
}


///Posicion Maxima
int PosMaxima(int v[], int tam){
	int Posmax=0;
	for (i=0;i<tam;i++){
		if (v[i]>v[Posmax]){
			Posmax=i;
		}
	}
	return Posmax;
}

///Cuento cada dado que salio
void CuentaDados(int v[], int tam,int vposdado[],int tam2){
 for(i=0;i<tam;i++){
      switch(v[i]){
        case 1: vposdado[0]++;
        break;
        case 2: vposdado[1]++;
        break;
        case 3: vposdado[2]++;
        break;
        case 4: vposdado[3]++;
        break;
        case 5: vposdado[4]++;
        break;
        case 6: vposdado[5]++;
        break;
        }
    }
}

///Poner Vector en 0
void ponerCero(int v[], int tam){
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}






//------------------------------------------------------------------------//




/// 1 Jugador

void UnJugador(){

//variables

int PuntajeTotal=0, ronda=1, lanz=0, Puntaje=0, PuntosRonda=0, vcontador[6], vc[7], dado[6], posmax;

 string nombreJ1;


      cout<<endl<<endl<<endl;
      cout<<"\t\t\t\t\t [MODO UN SOLO JUGADOR]"<<endl<<endl;
      cout <<"\t\t\t\t\t Ingrese NOMBRE: ";
      getline(cin,nombreJ1);


      system("cls");


 ///WHILE

         while (PuntajeTotal<10000){

         bool flag;
        system("cls");

      //menu
      cout<<endl;
      cout<<"TURNO: "<<nombreJ1<<"\t |";
      cout<<"RONDA N: "<<ronda<<"\t |";
      cout<<"LANZAMIENTO N: "<<lanz<<"\t |";
      cout<<"PUNTUACION ACTUAL: "<<PuntosRonda<<"\t |";
      cout<<"PUNTUACION TOTAL: "<<PuntajeTotal<<"\t |";

            flag=true;

    //+1 lanzamientos
    lanz++;

 //LANZAR DADOS
 lanzar_dados();


// funcion de tirar dados manualmete   //   TrucharDados(dado,6);

     //                   CuentaDados(dado,6,vcont,6);

                            ponerCero(vc,10);


                            ///llama al .h combinaciones de dados

                            vc[0]=JuegoDe1(dado,6);  //juego 1

                            vc[1]=JuegoDe5(dado,6); //juego 2

                            vc[2]=Trio1(dado,6); //juego 3

                            vc[3]=TriodeX(dado,6); //juego 4

                            vc[4]=Trio1Amp(dado,6); //juego 5

                            vc[5]=EscaleraLarga(dado,6); //juego 6

                            vc[6]=Sexteto(dado,6); //juego 7

                                posmax=PosMaxima(vc,7);
                                Puntaje=vc[posmax];


    //MOSTRAR COMBINACION

      MostrarCombinaciones();


// system("cls");



}







//------------------------------------------------------------------------//

#endif // FUNCIONES_H_INCLUDED
