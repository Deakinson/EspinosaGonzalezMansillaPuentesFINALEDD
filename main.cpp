#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int bat, vs=1;
    char usuario[30], oponente[30];
    cout<<"Ingrese cantidad de batallas a realizar: "<<endl;
    cin>>bat;
    do{
        if ((vs<1) or (vs>6)){
            cout<<"Numero incorrecto, debe ser un numero entre 1 y 6"<<endl;
        }
        cout<<"Ingrese cantidad de Pokemon a usar (1 minimo, 6 maximo)"<<endl;
        cin>>vs;
    }
    while ((vs<1) and (vs>6));
    cout<<"Ingrese nombre usuario: "<<endl;
    fflush(stdin);
    gets(usuario);
    cout<<"Ingrese nombre Oponente: "<<endl;
    fflush(stdin);
    gets(oponente);
    return 0;
}
