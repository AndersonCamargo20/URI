entrada = input().split()

a = float(entrada[0])
b = float(entrada[1])
c = float(entrada[2])

if(a<b+c and b<a+c and c<a+b):
    print("Perimetro = {:.1f}".format(a+b+c))
else:
    D=.5*(a+b)*c
    print("Area = {:.1f}".format(D))