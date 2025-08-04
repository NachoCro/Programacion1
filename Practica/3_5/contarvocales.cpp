#include <iostream>
#include <cctype>

using namespace std;

// primero saber cuales son las vocales
// Comparar cada letra de la frase y contar si son iguales a una vocal

int contarVocal(string frase)
{
    string vocales = "aeiou";
    int contarVocales = 0;
    for(int i = 0;i <= frase[i];i++)
    {
        char fraseMinuscula = tolower(frase[i]);
        for(int j=0;j <= vocales[j];j++)
        {
            if(fraseMinuscula == vocales[j])
            {
                contarVocales++;
            }
        }
    }
    return contarVocales;
}

int main()
{
    string frase;
    cout << "Decime algo y te voy a decir cuantas vocales tiene: ";
    cin >> frase;
    int NumeroDeVocales = contarVocal(frase);
    cout << NumeroDeVocales;
    return 0;
}
