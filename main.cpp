#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/**
*@param argc Cantidad de argumentos
*@param argv Arreglo asociativo de argumentos
*@return el codigo de saludo de la ejecucion del programa
*/    
int main(int argc, char**  argv){
    //Si hay argumentos vamos a procesarlos
    if(argc>1){
        string palabra(argv[1]);
        int largo= palabra.size();
        char letra = palabra [0];
        int contador=0;
        string resultado="";
        
        for (int i=0;i<largo;i++){
            if (char(palabra[i])==letra){
                contador=contador+1;
                letra=palabra[i];
            }
            else{
                resultado=resultado + letra;
                resultado=resultado + to_string(contador);
                contador=1;
                letra=palabra[i];
            }
            if (i==largo-1){
                resultado=resultado + letra;
                resultado=resultado + to_string(contador);
            }
        }
        cout<<"Resultado: " + resultado<<endl;   
        return 0;
    }else{

        cout<<"No se ingreso ninguna palabra :c"<<endl;
        return 1;
    }
}