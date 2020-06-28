#include "iostream"
using namespace std;

float prom(float n1, float n2, float n3, float n4, float n5){
    float promedio;

    promedio = (n1+n2+n3+n4+n5) / 5;

    return (promedio);
}
int main(void){
    
    float n1, n2, n3, n4, n5, nfi;
    int i, n;
  
    cout << endl;
    cout << "Notas de alumnos" << endl;
    cout << "Ingrese el numero de alumnos: "<< endl;
    cin >> n;

    for(int i = 0; i < n; i++){ 
            cout << "Ingrese nota 1: " << endl;
            cin >> n1;
            cout << "Ingrese nota 2: " << endl;
            cin >> n2;
            cout << "Ingrese nota 3: " << endl;
            cin >> n3;
            cout << "Ingrese nota 4: " << endl;
            cin >> n4;
            cout << "Ingrese nota 5: " << endl;
            cin >> n5;

            nfi = prom(n1, n2, n3, n4, n5);

            cout << "La nota final es: " << nfi << endl;

            if(nfi > 7){
            cout << "APROBASTE!!!!" << endl;
            }
            else{
                cout << "Reprobaste, esfuerzate mas" << endl;
            }
    }
  
    return 0;
    }