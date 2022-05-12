#include <iostream>
using namespace std;
int main () {
    
    int primerNumero;
    int segundoNumero;
    

    cout << "Ingrese el primer nùmero: ";
    cin >> primerNumero;
    cout << "Ingrese el segundo nùmero: ";
    cin >> segundoNumero;
    
    
    if (primerNumero < segundoNumero) {
        cout << "El primer nùmero es mayor.";
    }

    else {
        cout << "El segundo nùmero es menor.";
    }


    return 0;
}