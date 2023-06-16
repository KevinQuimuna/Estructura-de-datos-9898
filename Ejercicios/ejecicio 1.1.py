def busqueda_lineal(lista, objetivo):
    for i, num in enumerate(lista):
        if num == objetivo:
            return i  # Retorna la posición si se encuentra el número
    return -1  # Retorna -1 si el número no está presente

# Paso 1: Solicitar al usuario el número objetivo
objetivo = int(input("Ingrese el número objetivo: "))

# Paso 2: Crear una lista de números enteros (puedes modificar esta lista según tus necesidades)
numeros = [2, 5, 7, 10, 13, 15, 18, 20]

# Paso 3: Implementar la función de búsqueda lineal
posicion = busqueda_lineal(numeros, objetivo)

# Paso 4: Imprimir la posición si se encuentra el número
if posicion != -1:
    print(f"El número {objetivo} se encuentra en la posición {posicion}.")
else:
    # Paso 5: Imprimir un mensaje indicando que el número no está presente
    print(f"El número {objetivo} no está presente en la lista.")
