#include <iostream>

int main() {
    int n;
    // Leemos el número a verificar
    if (!(std::cin >> n)) return 0;

    // Los números <= 1 no son primos por definición
    if (n <= 1) {
        std::cout << "No" << std::endl;
        return 0;
    }

    bool es_primo = true;
    // Optimizamos: solo buscamos divisores hasta la raíz de n
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            es_primo = false;
            break; // Si encontramos un divisor, ya no es primo
        }
    }

    // El autograder suele ser estricto con las mayúsculas/minúsculas
    if (es_primo) {
        std::cout << "Si" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}