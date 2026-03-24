#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string linea;
    // Leer la línea completa, incluyendo espacios
    if (!std::getline(std::cin, linea)) return 0;
    
    int contador = 0;
    for (char c : linea) {
        // Convertir cada carácter a minúscula antes de comparar
        char min = std::tolower(c);
        if (min == 'a' || min == 'e' || min == 'i' || min == 'o' || min == 'u') {
            contador++;
        }
    }
    
    std::cout << contador << std::endl;
    return 0;
}
