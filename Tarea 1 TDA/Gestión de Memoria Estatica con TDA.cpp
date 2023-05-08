#include <iostream>

using namespace std;

struct MemoriaEstatica {
    int tamano;
    int *memoria;
};

void inicializarMemoria(MemoriaEstatica &mem, int tamano) {
    mem.tamano = tamano;
    mem.memoria = new int[tamano];
}

void escribirMemoria(MemoriaEstatica &mem, int posicion, int valor) {
    if (posicion < mem.tamano) {
        mem.memoria[posicion] = valor;
    }
}

int leerMemoria(MemoriaEstatica &mem, int posicion) {
    if (posicion < mem.tamano) {
        return mem.memoria[posicion];
    } else {
        return -1; // valor de error
    }
}

void liberarMemoria(MemoriaEstatica &mem) {
    delete[] mem.memoria;
}

int main() {
    // Crear una estructura de memoria estática y llamar a la función de inicialización de la memoria.
    MemoriaEstatica mem;
    int tamanoMemoria = 10;
    inicializarMemoria(mem, tamanoMemoria);

    // Escribir y leer algunos valores de la memoria estática.
    escribirMemoria(mem, 0, 5);
    escribirMemoria(mem, 2, 10);
    cout << "Valor en la posicion 0: " << leerMemoria(mem, 0) << endl;
    cout << "Valor en la posicion 2: " << leerMemoria(mem, 2) << endl;

    // Liberar la memoria estática.
    liberarMemoria(mem);

    return 0;
}

