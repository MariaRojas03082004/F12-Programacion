#include <iostream>

int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    
    int suma = 0;
    // Repetir mientras n sea mayor a 0
    while (n > 0) {
        suma += (n % 10); // Obtener el último dígito
        n /= 10;          // Eliminar el último dígito
    }
    
    std::cout << suma << std::endl;
    return 0;
}