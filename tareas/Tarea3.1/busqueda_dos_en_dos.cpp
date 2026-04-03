#include <iostream>
#include <vector>
#include <algorithm>

// Función de búsqueda de 2 en 2
int busqueda_dos_en_dos(const std::vector<int>& lista, int n, int objetivo) {
    int i = 0;
    while (i < n && lista[i] < objetivo) {
        i = i + 2;
    }
    int retroceso = i - 1;
    for (int j = std::max(0, retroceso); j <= std::min(i, n - 1); ++j) {
        if (lista[j] == objetivo) {
            return j;
        }
    }
    return -1;
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