#include <iostream>
using namespace std;

int main(){
    float salario = 0;
    cout << "Digite su salario: $";
    cin >> salario;

    if(salario <= 0){
        cout << "Salario erroneo" << endl;
    }
    else{
        float descuentoAFP = salario * 0.0625;
        float descuentoISSS = salario * 0.03;

        salario -= (descuentoAFP + descuentoISSS);
        cout << "Tras descuento de AFP e ISS: $" << salario << endl;

        float retencionRenta = 0;
        if(salario <= 472)
            retencionRenta = 0;
        else if(salario <= 895.24){
            float exceso = salario - 472;
            retencionRenta = 17.67 + exceso * 0.1;
        }
        else if(salario <= 2038.10){
            float exceso = salario - 895.24;
            retencionRenta = 60 + exceso * 0.2;
        }
        else{
            float exceso = salario - 2038.10;
            retencionRenta = 288.57 + exceso * 0.3;
        }
        cout << "Salario neto: $" << (salario - retencionRenta) << endl;
    }

    return 0;
}
