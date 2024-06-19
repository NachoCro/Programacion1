#include <iostream>

using namespace std;

// Declarar NombreDelUsuario y ContraseniaDelUsuario como string
// Declarar otras 2 vacias UsuarioDelCliente y ContraseniaDelCliente
// Comparar el Usuario y contrasenia para ver si son iguales y si son iguales decir "El usuario es correcto"
// y si no "El usuario o contraseña son incorrectos"

int main(){

    string NombreDelUsuario = "Usuario";
    string ContraseniaDelUsuario = "Contrasenia";
    string UsuarioDelCliente;
    string ContraseniaDelCliente;
    cout << "Ingrese el Usuario: " ;
    cin >> UsuarioDelCliente;
    cout << "Ingrese la contrasenia: ";
    cin >> ContraseniaDelCliente;
    if(NombreDelUsuario == UsuarioDelCliente && ContraseniaDelUsuario == ContraseniaDelCliente){
        cout << "El usuario ingreso correctamente";
    }else{
        cout << "El usuario o la contrasenia es incorrecto";
    }

    return 0;
}
