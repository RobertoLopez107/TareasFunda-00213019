#Calcular el promedio ponderado de x notas.

cantNotasString=input("Ingrese una cantidad de evaluacione: ")
cantNotas=int(cantNotasString)
notas= []
ponderaciones= []
suma = 0
sumaPonderaciones = 0
for i in range (0, cantNotas):
    notas.append(float(input("Ingrese la nota" + str(i+1) + ": "))) 
    ponderaciones.append(float(input("Ingrese las ponderaciones:")))
    suma = suma + (notas[i]*ponderaciones[i])
    sumaPonderaciones = sumaPonderaciones + ponderaciones[i]
    print("La nota final es: ")
    print(suma/sumaPonderaciones)