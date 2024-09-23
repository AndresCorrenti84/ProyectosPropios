#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int matriz [12][12];
    int min=0;//valor minimo
    int max=0;//valor maximo

    for (int fila =0; fila < 12; fila++)
    {
        for (int columna = 0; columna < 12;columna++)
        {
            int valor = matriz[fila][columna]= 2 * ((rand() % 256) + 1);

            cout <<matriz [fila][columna] << " ";

            if(valor<min){
                min=valor;
            }
            if(valor>max){
                max=valor;
            }
        }
       cout<<endl;
    }
    cout<< "*************************************************" << endl;
    //dabes imprimir el valor minimo y el maximo

    system("pause");
}