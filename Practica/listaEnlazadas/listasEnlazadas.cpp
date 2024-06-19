#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
struct notas {

    notas *sig;
};

struct alumnos
{
    char *Nombre;

    alumnos *sig;
};

alumnos *Lista = nullptr;

bool ListaVacia();
char *SacaLista();
void MuestraListado();
void InsertarLista(const char *Nom);

bool ListaVacia()
{
    return Lista == nullptr;
}

char *SacaLista()
{
    if (ListaVacia())
    {
        printf("La lista está vacía.\n");
        return nullptr;
    }
    alumnos *temp = Lista;
    char *nombre = strdup(Lista->Nombre); // Copiamos el nombre
    Lista = Lista->sig;
    free(temp->Nombre); // Liberar la memoria del nombre del nodo
    free(temp); // Liberar la memoria del nodo
    return nombre;
}

void MuestraListado()
{
    if (ListaVacia())
    {
        printf("La lista está vacía.\n");
        return;
    }
    alumnos *temp = Lista;
    while (temp != nullptr)
    {
        printf("%s", temp->Nombre);
        temp = temp->sig;
    }
}

void InsertarLista(const char *Nom)
{
    alumnos *t = new alumnos;
    if (!t)
    {
        printf("No se pudo asignar memoria.\n");
        return;
    }
    t->Nombre = strdup(Nom); // Asignamos el nombre
    t->sig = nullptr;
    if (Lista == nullptr)
    {
        Lista = t;
    }
    else
    {
        alumnos *q = Lista;
        while (q->sig != nullptr)
        {
            q = q->sig;
        }
        q->sig = t;
    }
}

int main()
{
    system("cls");
// Ejemplo de inserción de nombres
    InsertarLista("Ana");
    InsertarLista("Juan");
    InsertarLista("Maria");
    MuestraListado();
// Ejemplo de extracción de un elemento
    char *nombre = SacaLista();
    if (nombre)
    {
        printf("Elemento extraido: %s\n", nombre);
        free(nombre); // Liberar la memoria del nombre extraído para no volver a encontrarme un valor en caso de que se asigne el mismo espacio de memoria
    }
    MuestraListado();
    return 0;
}
