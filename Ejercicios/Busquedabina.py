def busqueda_binaria(lista, objetivo):
    inicio = 0
    fin = len(lista) - 1

    while inicio <= fin:
        medio = (inicio + fin) // 2
        elemento_medio = lista[medio]

        if elemento_medio == objetivo:
            return medio
        elif elemento_medio < objetivo:
            inicio = medio + 1
        else:
            fin = medio - 1

    return -1

numero_objetivo = int(input("Ingrese el número objetivo: "))

lista_numeros = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91]

resultado = busqueda_binaria (lista_numeros, numero_objetivo)

if resultado != -1:
    print("El número", numero_objetivo, "se encuentra en la posición", resultado)
else:
    print("El número", numero_objetivo, "no está presente en la lista.")
