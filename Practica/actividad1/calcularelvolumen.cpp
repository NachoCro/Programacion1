#include <iostream>

using namespace std;

// VolumenDeUnObjeto = BaseDelObjeto * AlturaDelObjeto * ProfundidadDelObjeto

int main(){

    float BaseDelObjeto, AlturaDelObjeto, ProfundidadDelObjeto;

    cout << "Ingrese la base ";
    cin >> BaseDelObjeto;

    cout << "Ingrese la altura ";
    cin >> AlturaDelObjeto;

    cout << "Ingrese la profundidad ";
    cin >> ProfundidadDelObjeto;

    float VolumenDeUnObjeto = BaseDelObjeto * AlturaDelObjeto * ProfundidadDelObjeto;
    cout << "El volumen del objeto es : " << VolumenDeUnObjeto;

    return 0;
}
