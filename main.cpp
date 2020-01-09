
#include <iostream>
#include <string>
using namespace std;
#define BUCLES 10
/**********************************************
 * Función main
***********************************************/
int main()
{
    int i;
    int contador=0;
    string nombre;
    cout << "Teclea tu nombre: ";
    cin >> nombre;
    cout << "Hola: "+nombre << endl;
    for (i=0; i<BUCLES;i++)
    {
        cout << "Hola: " + nombre +" por "+ to_string(i)+" vez" << endl;    
        contador++;
        cout << "contador = "+to_string(contador);
        cin.get();
    }
    cin.get();
    return 0;
}   
/**********************************************
 * Fin
 * 
***********************************************/