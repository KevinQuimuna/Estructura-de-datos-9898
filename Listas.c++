#include <iostream>
#include <list>

int main() {
    // Crear una lista vacía
    std::list<int> miLista;

    // Agregar elementos a la lista
    miLista.push_back(10);
    miLista.push_back(20);
    miLista.push_back(30);

    // Acceder a los elementos de la lista
    std::cout << "Elementos de la lista: ";
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    // Tamaño de la lista
    std::cout << "Tamaño de la lista: " << miLista.size() << std::endl;

    // Acceder al primer elemento
    std::cout << "Primer elemento: " << miLista.front() << std::endl;

    // Acceder al último elemento
    std::cout << "Último elemento: " << miLista.back() << std::endl;

    // Insertar un elemento en una posición específica
    auto it = miLista.begin();  // Obtener un iterador al inicio de la lista
    ++it;  // Avanzar el iterador una posición
    miLista.insert(it, 15);  // Insertar el valor 15 en la posición actual del iterador

    // Eliminar un elemento de la lista
    miLista.pop_front();  // Eliminar el primer elemento
    miLista.pop_back();   // Eliminar el último elemento

    // Verificar si la lista está vacía
    if (miLista.empty()) {
        std::cout << "La lista está vacía" << std::endl;
    } else {
        std::cout << "La lista no está vacía" << std::endl;
    }

    return 0;
}
