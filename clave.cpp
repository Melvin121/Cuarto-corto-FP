#include "iostream"
using namespace std;

int main(){

    char texto[100];
    int i = 0;

        cout << "Ingrese el texto a codificar: "<< endl;

        cin >> texto;
        while(texto[i] != '\0'){
            
            if(texto[i]=='M' || texto[i]=='m')
                texto[i]='0';
            
            if(texto[i]=='U' || texto[i]=='u')
                texto[i]='1';
            
            if(texto[i]=='R' || texto[i]=='r')
                texto[i]='2';
        
            if(texto[i]=='C' || texto[i]=='c')
                texto[i]='3';
            
            if(texto[i]=='I' || texto[i]=='i')
                texto[i]='4';
            
            if(texto[i]=='E' || texto[i]=='e')
                texto[i]='5';
            
            if(texto[i]=='L' || texto[i]=='l')
                texto[i]='6';
            
            if(texto[i]=='A' || texto[i]=='a')
                texto[i]='7';
            
            if(texto[i]=='G' || texto[i]=='g')
                texto[i]='8';
            
            if(texto[i]=='O' || texto[i]=='O')
                texto[i]='9';
            
            i++;
            
        }
        cout << texto << endl;
}