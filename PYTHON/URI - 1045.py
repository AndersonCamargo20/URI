a,b,c=map(float, input().split())
if(a<b):
    aux = a
    a = b
    b = aux
if(a<c):
    aux = a
    a = c
    c = aux
if(b<c):
    aux = b
    b = c
    c = aux
if(a >= b + c):
    print("NAO FORMA TRIANGULO")
else:
    if(a * a == b * b + c * c):
        print("TRIANGULO RETANGULO")
    if(a * a > b * b + c * c):
        print("TRIANGULO OBTUSANGULO")
    if(a * a < b * b + c * c):
        print("TRIANGULO ACUTANGULO")
    if(a == b and b == c and a == c):
        print("TRIANGULO EQUILATERO")
    else:
        if(a == b or b == c or a == c):
            print("TRIANGULO ISOSCELES");
