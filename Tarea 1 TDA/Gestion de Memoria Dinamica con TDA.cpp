#include <iostream>
using namespace std;

struct MemoriaDinamica {
    int tamano;
    int* memoria;
};

void reservarMemoria(MemoriaDinamica& md, int tamano) {
    md.tamano = tamano;
    md.memoria = new int[tamano];
}

void escribirMemoria(MemoriaDinamica& md, int posicion, int valor) {
    if (posicion >= 0 && posicion < md.tamano) {
        md.memoria[posicion] = valor;
    } else {
        cout << "Error: posición fuera de rango" << endl;
    }
}

int leerMemoria(MemoriaDinamica& md, int posicion) {
    if (posicion >= 0 && posicion < md.tamano) {
        return md.memoria[posicion];
    } else {
        cout << "Error: posición fuera de rango" << endl;
        return -1;
    }
}

void liberarMemoria(MemoriaDinamica& md) {
    delete[] md.memoria;
}

int main() {
    MemoriaDinamica md;
    int tamano = 5;
    reservarMemoria(md, tamano);
    
    // Escribir y leer algunos valores
    escribirMemoria(md, 0, 10);
    escribirMemoria(md, 2, 20);
    escribirMemoria(md, 4, 30);
    cout << leerMemoria(md, 0) << endl;
    cout << leerMemoria(md, 2) << endl;
    cout << leerMemoria(md, 4) << endl;
    
    liberarMemoria(md);
    return 0;
}

