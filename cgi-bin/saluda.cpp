#include <iostream>
#include <cstdlib>  // Para getenv
#include <cstring>  // Para strcmp

using namespace std;

int main() {
    // Obtener el QUERY_STRING que identifica qué botón fue presionado
    char* queryString = getenv("QUERY_STRING");

    // Generar la respuesta HTTP
    cout << "Content-Type: text/plain\n\n"; // Tipo de contenido

    // Verificar si se recibió una cadena de consulta
    if (queryString != nullptr) {
        // Comparar el QUERY_STRING con las acciones posibles
        if (strcmp(queryString, "accion=iniciar") == 0) {
            cout << "Hola mundo"; // Mensaje para el botón "Iniciar"
        }  
        else {
            cout << "Hola mundo con el segundo botón."; // Mensaje de error si no se reconoce la acción
        }
    } else {
        cout << "No se recibió ninguna acción."; // Mensaje de error si no se recibe acción
    }

    return 0;
}

