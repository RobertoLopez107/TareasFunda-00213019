#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int matriz[n][m];
    
    cout<<"Ingrese la cantidad de filas: ";
    cin>>n;
    
    cout<<"Ingrese la cantidad de columnas: ";
    cin>>m;
    
    for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
             cout<<"Ingrese el valor: ";
             cin>>matriz[i][j];
          }
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
