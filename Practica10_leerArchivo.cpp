//Selena Yaretzi Hernández López 
//Manda a llamar un archivo txt y lo lee
#include <stdio.h>
#include <fstream>
#include <string>

int main() {
    std::ifstream archivo("archivo.txt"); 
    std::string contenido; 

    if (archivo.is_open()) { 
        std::string linea;
        while (std::getline(archivo, linea)) { 
            contenido += linea + "\n"; 
        }
        archivo.close();
    } else {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    printf("Contenido del archivo:\n%s", contenido.c_str()); 

    return 0;
}
