#include <iostream>

using namespace std;

int main(){

int a;

cout<<"Bienvenido al restaurante UCA."<<endl;
cout<<"Desea un desayuno, almuerzo o cena?"<<endl;
cout<<"1. Desayuno"<<endl;
cout<<"2. Almuerzo"<<endl;
cout<<"3. Cena"<<endl;
cin>>a;

if(a==1){
    cout<<"De desayuno le tenemos pancakes acompañado con cafe, en un momento le traemos la orden.";
}


if(a==2){
    cout<<"De almuerzo le tenemos huevos con frijoles y acompañado de un te de frambuesa";
}


if(a==3){
    cout<<"De cena le tenemos pupusa con horchata";
}


}
