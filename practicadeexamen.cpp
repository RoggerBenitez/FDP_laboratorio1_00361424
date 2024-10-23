#include <iostream>
using namespace std;

double suma (double number1, double number2){
    double resu = 0;
    resu = number1 + number2;
    return resu;

}
double resta (double number1, double number2){
    double resu = 0;
    resu = number1 - number2;
    return resu;
}
double multiplicacion (double number1, double number2){
    double resu = 0;
    resu = number1 * number2;
    return resu;
}
double division (double number1, double number2){
    double resu = 0;
    resu = number1 / number2;
    return resu;
}

int main  (){

    double num1, num2, resultado;
    int opcion;

    cout << " Calcular" << endl;
    cout << " 1. suma" << endl;
    cout << " 2. resta" << endl;
    cout << " 3. multiplicacion" << endl;
    cout << " 4. division" << endl;
    cin >> opcion;

    cout << " ingrese su primer numero" << endl;
    cin >> num1;
    cout << " ingrese su segundo numero" << endl;
    cin >> num2;

    switch (opcion)
    {
    case 1:
        resultado = suma(num1, num2);
        cout << "el resultado de la suma es: " << resultado << endl;
        break;

    case 2:
        resultado = resta(num1, num2);
        cout << "el resultado de la resta es: " << resultado << endl;
        break;
    
    case 3:
        resultado = multiplicacion(num1, num2);
        cout << "el resultado de la multiplicacion es: " << resultado << endl;
        break;
    
    case 4:
        resultado = division(num1, num2);
        cout << "el resultado de la division es: " << resultado << endl;
        break;
    
    default:
        break;
    }

    return 0;
}
