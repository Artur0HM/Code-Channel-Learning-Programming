#include <iostream>
using namespace std;
int main () {
    
    float kilometros;
    const int kilometrosMetros = 1000;
    float metros;

    cout << "Ingrese una distancia en Kilometros: ";
    cin >> kilometros;

    metros = kilometros * kilometrosMetros;

    cout << "LA DISTANCIA QUE INGRESASTE ES DE " << kilometros << " kilometros." << endl;
    cout << "La distancia en metros es de: " << metros << " metros.";


    return 0;
}