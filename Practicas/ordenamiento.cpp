#include <iostream>
#include <vector>
#include <string>

using namespace std;

// --- PARTE A: BURBUJA ---
void burbuja(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool intercambiado = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                intercambiado = true;
            }
        }
        if (!intercambiado) break; 
    }
}

// --- PARTE B: SELECCIÓN ---
void seleccion(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// --- PARTE C: MERGE SORT ---
vector<int> mezclar(const vector<int>& izq, const vector<int>& der) {
    vector<int> resultado;
    int i = 0, j = 0;

    while (i < (int)izq.size() && j < (int)der.size()) {
        if (izq[i] <= der[j]) {
            resultado.push_back(izq[i]);
            i++;
        } else {
            resultado.push_back(der[j]);
            j++;
        }
    }
    while (i < (int)izq.size()) { resultado.push_back(izq[i]); i++; }
    while (j < (int)der.size()) { resultado.push_back(der[j]); j++; }
    
    return resultado;
}

vector<int> mergesort(const vector<int>& arr) {
    if (arr.size() <= 1) return arr;

    int medio = arr.size() / 2;
    vector<int> izq(arr.begin(), arr.begin() + medio);
    vector<int> der(arr.begin() + medio, arr.end());

    return mezclar(mergesort(izq), mergesort(der));
}

int main() {
    string algoritmo;
    int n;

    if (!(cin >> algoritmo >> n)) return 0;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (algoritmo == "burbuja") {
        burbuja(arr);
    } else if (algoritmo == "seleccion") {
        seleccion(arr);
    } else if (algoritmo == "mergesort") {
        arr = mergesort(arr);
    }

    for (int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i] << (i == (int)arr.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}