#include <iostream>
#include <string>

int main() {
    std::string palabra;
    // Usamos cin >> palabra para leer una palabra completa
    if (!(std::cin >> palabra)) return 0;

    int contador = 0;
    // Recorremos cada letra de la palabra
    for (char c : palabra) {
        // Convertimos a minúscula para comparar solo una vez
        char letra = tolower(c);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }
    }

    std::cout << contador << std::endl;
    return 0;
}