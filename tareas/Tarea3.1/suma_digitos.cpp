#include <iostream>

int main() {
    long long n;
    // Leemos el número y verificamos que la entrada sea válida
    if (!(std::cin >> n)) return 0;

    // TRUCO: Si n es negativo, lo convertimos a positivo
    if (n < 0) {
        n = -n;
    }

    long long suma = 0;
    
    // Caso especial para el 0 (aunque el bucle lo maneja, es bueno tenerlo en mente)
    if (n == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    // Algoritmo para extraer dígitos uno por uno
    while (n > 0) {
        suma += n % 10; // Extrae el último dígito
        n /= 10;        // Elimina el último dígito
    }

    std::cout << suma << std::endl;
    return 0;
}