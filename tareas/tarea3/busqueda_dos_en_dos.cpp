#include <iostream>
#include <vector>
#include <algorithm>

// Implementación de la Búsqueda de 2 en 2 con Retroceso
int busqueda_dos_en_dos(const std::vector<int>& lista, int n, int objetivo) {
    int i = 0;
    
    // Avanzar de 2 en 2 mientras el elemento sea menor al objetivo
    while (i < n && lista[i] < objetivo) {
        i += 2;
    }

    // Retroceder 1 posición para verificar los candidatos restantes
    int inicio_revision = i - 1;
    
    // Revisar hasta 2 posiciones a partir del retroceso
    for (int j = std::max(0, inicio_revision); j <= std::min(i, n - 1); ++j) {
        if (lista[j] == objetivo) {
            return j;
        }
    }

    return -1; // No encontrado
}

int main() {
    int n, objetivo;
    if (!(std::cin >> n)) return 0;
    
    std::vector<int> lista(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lista[i];
    }
    
    std::cin >> objetivo;
    
    std::cout << busqueda_dos_en_dos(lista, n, objetivo) << std::endl;
    
    return 0;
}