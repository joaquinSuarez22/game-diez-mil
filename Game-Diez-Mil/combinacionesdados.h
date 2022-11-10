#ifndef COMBINACIONESDADOS_H_INCLUDED
#define COMBINACIONESDADOS_H_INCLUDED


//numero aleatorio entre 1 y 6


///variables
int i, Puntos=0;


///funciones


//contador de dados
int ContarNumeros(int v[],int valor){
  int i, cantidad=0;
  for (i=0;i<6;i++){
    if (v[i]==valor){
        cantidad++;
    }
  }
  return cantidad;
}

///combinacines de dados / total = 7




///-----------------------------------------------------------------------------------/// jugada = 1

///----Nombre de JUGADA: Juego de 1



int JuegoDe1(int v[], int tam){
int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
}
        if (D1==1){
            Puntos=100;
        }
        else if (D1==2){
            Puntos=200;
        }
        return Puntos;
}

///-----------------------------------------------------------------------------------/// jugada = 2


///----Nombre de JUGADA: Juego de 5


int JuegoDe5(int v[], int tam){
int D5=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==5){
            D5++;
        }
}
        if (D5==1){
            Puntos=50;
        }
        else if (D5==2){
            Puntos=100;
        }
        return Puntos;
}

///-----------------------------------------------------------------------------------/// jugada = 3

///----Nombre de JUGADA: trio 1

int Trio1(int v[], int tam){
 int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
}
        if (D1==3){
            Puntos=1000;
        }
        return Puntos;
}



///-----------------------------------------------------------------------------------/// jugada = 4

///----Nombre de JUGADA: trio de X++ (x ==> es el numero de dado)

// X*100


int TriodeX(int v[], int tam){
  int D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
     for (i=0;i<tam;i++){
        if(v[i]==2){
            D2++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==3){
            D3++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==4){
            D4++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==5){
            D5++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==6){
            D6++;
        }
    }
        if (D2==3){
            Puntos=200;
        }
       else if (D3==3){
            Puntos=300;
        }
       else if (D4==3){
            Puntos=400;
        }
        else if (D5==3){
            Puntos=500;
        }
        else if (D6==3){
            Puntos=600;
        }
        return Puntos;
}


///-----------------------------------------------------------------------------------/// jugada = 5

///----Nombre de JUGADA: Trio 1  Ampliado



int Trio1Amp(int v[], int tam){
 int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
    }
        if (D1==4){
        Puntos=2000;
        }
        else if (D1==5){
        Puntos=2000;
        }
    return Puntos;
}


///-----------------------------------------------------------------------------------/// jugada = 6

///----Nombre de JUGADA: Escalera Larga




 int EscaleraLarga(int v[], int tam){
int D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
         if(v[i]==2){
            D2++;
        }
         if(v[i]==3){
            D3++;
        }
         if(v[i]==4){
            D4++;
        }
         if(v[i]==5){
            D5++;
        }
         if(v[i]==6){
            D6++;
        }
}
        if (D1==1&&D2==1&&D3==1&&D4==1&&D5==1&&D6==1){
            Puntos=1500;
        }
        return Puntos;
}

///-----------------------------------------------------------------------------------/// jugada = 7

///----Nombre de JUGADA: Sexteto



int Sexteto(int v[], int tam){
int D1=0, Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
    }
        if (D1==6){
        Puntos=10000;
        }
        return Puntos;
}

///-----------------------------------------------------------------------------------///



#endif // COMBINACIONESDADOS_H_INCLUDED
