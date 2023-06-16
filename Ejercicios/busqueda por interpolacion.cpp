#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int interpolationSearch(int target, const vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            if (arr[low] == target) {
                return low;
            }
            return -1;
        }

        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (arr[pos] == target) {
            return pos;
        }

        if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}

int main() {
    // Paso 1: Solicitar al usuario el n�mero objetivo
    int target;
    cout << "Ingrese el numero objetivo: ";
    cin >> target;

    // Paso 2: Crear una lista de n�meros enteros ordenada de forma ascendente
    vector<int> lista_numeros;
    // Utilizar una funci�n para inicializar el vector
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(lista_numeros));
    sort(lista_numeros.begin(), lista_numeros.end());

    // Paso 3: Implementar la funci�n de b�squeda por interpolaci�n
    int resultado = interpolationSearch(target, lista_numeros);

    // Paso 4: Comparar el n�mero objetivo con el elemento estimado de la lista
    if (resultado != -1) {
        // Paso 5: Si se encuentra el n�mero objetivo, imprimir su posici�n en la lista
        cout << "El numero " << target << " se encuentra en la posicion " << resultado << endl;
    } else {
        // Paso 6: Si no se encuentra el n�mero objetivo, imprimir un mensaje indicando que no est� presente
        cout << "El numero " << target << " no esta presente en la lista." << endl;
    }

    return 0;
}

