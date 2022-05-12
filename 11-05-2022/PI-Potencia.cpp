#include <iostream>
#include <math.h>
using namespace std;
int main () {

    const float PI = 3.1415;
    int potencia;
    float resultado;
    float raizCuadrada;



    cout << "Ingrese a que potencia va elevar PI: ";
    cin >> potencia;

    resultado = pow(PI, potencia);
    raizCuadrada = sqrt(resultado);
    //cout << "Elevaste a la potencia: " << potencia << endl;
    cout << "PI elevado a la potencia de " << potencia << " es: " << resultado << endl;
    cout << "La raiz cuadrada de: " << resultado << " es: " << raizCuadrada;

    return 0;
}