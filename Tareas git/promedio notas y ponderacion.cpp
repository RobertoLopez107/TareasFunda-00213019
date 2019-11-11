#include <iostream>

using namespace std;

int main()
{
    int cantNumeros;
    float sumaProducto=0.0,sumaPonderaciones=0.0;
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>cantNumeros;
    
    float notas[cantNumeros];
    float ponderacion[cantNumeros];
    
    float suma = 0.0;
    
    cout<<"Ingrese sus notas y sus ponderaciones: "<<endl;
    
    for(int i = 0; i<cantNumeros; i++){
        
        cout<<"Ingrese su nota y ponderacion: "<<endl;
        cin>>notas[i];
        cin>>ponderacion[i];
        sumaProducto = sumaProducto + notas[i] * ponderacion[i];
        sumaPonderaciones = sumaPonderaciones + ponderacion[i];
    }
    
    cout<<"El promedio es: "<< sumaProducto/sumaPonderaciones<<endl;

    return 0;
}
