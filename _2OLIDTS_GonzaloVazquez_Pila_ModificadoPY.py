"""capacidad = 10
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
    if tope >= 0:
        print("Elementos de la Pila:", end=" ")
        while tope >= 0:
            x = elementos[tope]
            tope -= 1
            print(x, end=" ")
    else:
        print("Pila vacía")
"""

capacidad=5;
elementos=[0]*capacidad;
pila_elemento=[0]*capacidad;
tope=-1;

def datos_pila(elementos,tope):
    print("Teclea elementos de la pila (Termina con -1)")
    print("Ingresa un elemento \n")
    x=0
    clave=-1

    while x !=clave:
        entrada=input()
        if entrada.isdigit():
            x=int(entrada)
            if tope<capacidad-1:
                tope+=1
                elementos[tope]=x
            else:
                print("Excepcion: pila llena")
                break
        else:
            print("Excepcion: entrada no valida")
    return tope
def impresion(pila_elementos,tope):
    if tope>=0:
        print("Elementos de la pila: ")
        while tope>=0:
            x=pila_elementos[tope]
            tope-=1
            print(str(x)+" ")
    else:
        print("Pila vacia")


def main():
    tope_dos=datos_pila(elementos,tope)
    impresion(elementos,tope_dos)
if __name__ == "__main__":
        main()