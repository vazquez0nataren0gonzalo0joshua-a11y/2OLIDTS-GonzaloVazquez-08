capacidad = 10
elementos = [0] * capacidad
tope = -1

print("Teclea elemento de la pila (termina con -1)")

x = 0
CLAVE = -1

while x != CLAVE:
    entrada = input()
    if entrada.isdigit():
        x = int(entrada)
        if tope < capacidad - 1:
            tope += 1
            elementos[tope] = x
        else:
            print("Excepción: Pila llena")
            break
    else:
        print("Excepción: Entrada no válida")

if tope >= 0:
    print("Elementos de la Pila:", end=" ")
    while tope >= 0:
        x = elementos[tope]
        tope -= 1
        print(x, end=" ")
else:
    print("Pila vacia")