#include <iostream>

using namespace std;

// IMC = Peso / (altura^2)

int main()
{

    float PesoDelUsuario;
    float AlturaDelUsuario;

    cout << "Ingresa el peso (en kilos) \n";
    cin >> PesoDelUsuario;

    cout << "Ingresa la altura (en centimetros) \n";
    cin >> AlturaDelUsuario;

    AlturaDelUsuario = AlturaDelUsuario / 100;

    float IMCDelUsuario = PesoDelUsuario / (AlturaDelUsuario * AlturaDelUsuario);

    cout << "El IMC tuyo es de " << IMCDelUsuario;

    if(IMCDelUsuario < 16.5 )
    {
        cout << "\nTenes bajo peso severo";
    }
    else if(IMCDelUsuario >= 16.5 && IMCDelUsuario < 18.5)
    {
        cout << "\nTenes bajo peso";
    }
    else if(IMCDelUsuario >= 18.5 && IMCDelUsuario <25)
    {
        cout << "\nTenes un peso normal";
    }
    else if(IMCDelUsuario >= 25 && IMCDelUsuario < 30)
    {
        cout << "\nTenes sobrepeso";
    }
    else if(IMCDelUsuario >= 30 && IMCDelUsuario < 35)
    {
        cout << "\nTenes obesidad tipo 1 (moderada)";
    }
    else if(IMCDelUsuario >= 35 && IMCDelUsuario < 40)
    {
        cout << "\nTenes Obesidad tipo 2 (severa)";
    }
    else
    {
        cout << "\nTenes obesidad tipo 3 (morbida)";
    }
    return 0;

}
