#include <iostream>

using namespace std;

int main(){

int a, b, factorial;

cout<<"Calcule el factorial del numero entero que ingrese \n Por favor ingrese un numero";
cin>>a;

factorial=1;

if(a==0){
    cout<<"El factorial del numero ingresado es: "<<factorial<<endl;
    }
    else{
        for(b=1; b<=a; b++){
            factorial=b*factorial;
        }

        cout<<"El factorial del numero ingresado es:"<<factorial;
    }
return 0;
}
