salario = float(input())

if(salario > 0 and salario <= 400):
    percent = 15
    aumento = (salario * 15) / 100
elif(salario > 400 and salario <= 800):
    percent = 12
    aumento = (salario * 12) / 100
elif(salario > 800 and salario <= 1200):
    percent = 10
    aumento = (salario * 10) / 100
elif(salario > 1200 and salario <= 2000):
    percent = 7
    aumento = (salario * 7) / 100
elif(salario > 2000):
    percent = 4
    aumento = (salario * 4) / 100

print("Novo salario: {:.2f}".format(salario + aumento))
print("Reajuste ganho: {:.2f}".format(aumento))
print("Em percentual: {} %".format(percent))