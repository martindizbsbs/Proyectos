#include <iostream>
using namespace std;

int main() {
    float radio, altura, area;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
altura=radio*radio;
    area = 3.14*altura;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}

