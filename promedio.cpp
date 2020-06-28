#include "iostream"
using namespace std;

float estatura [25];
float prom;
const int n = 25;
int men (float estatura[], int n);
float promedio (float estatura[], int n);
int may (float estatura[], int n);
int i;

int main(){

    cout << "Promedio de estaturas de alumnos"<< endl << endl;
     
    for (i = 0; i < n; i++){
        cout << "ingrese la estatura " << i + 1 << ": " << endl;
        cin >> estatura[i];
    }

    cout << "El promedio es: "<< promedio(estatura, n) << endl;
    cout << "Hay "<< may(estatura, n) << " datos arriba del promedio"<< endl;
    cout << "Hay "<< men(estatura, n) << " datos abajo del promedio"<< endl;
    
    return 0;
}

int men(float estatura [], int n){
    int menor = 0;

    for( int i = 0; i < n; i++){
        if( estatura[i] < prom){
            menor++;
        }
    }
    

return menor;
}

int may(float estatura[], int n){
    int mayor = 0;

    for(int i = 0; i < n; i++){
        if(estatura[i] > prom){
            mayor++;
        }
    }
return mayor;
}

float promedio(float estatura[], int n){

    for( int i = 0; i < n; i++){
        prom += estatura[i] / n;
    }
return prom;
}



    
