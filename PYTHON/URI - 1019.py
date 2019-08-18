valor = input()
valor = int(valor)

horas = valor / 3600
minutos = valor % 3600 / 60
segundos = valor % 60

print("%d:%d:%d" %(horas, minutos, segundos))