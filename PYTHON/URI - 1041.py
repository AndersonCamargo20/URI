dados = input().split()
a, b = dados

X = float(a)
Y = float(b)

if(X == 0.0 and Y == 0.0):
    print("Origem")
else:
    if(X == 0):
        print("Eixo Y")
    else:
        if(Y == 0):
            print("Eixo X")
        else:
            if(X>0.0 and Y>0.0):
                print("Q1")
            else:
                if(X<0.0 and Y>0.0):
                    print("Q2")
                else:
                    if(X<0.0 and Y<0.0):
                        print("Q3")
                    else:
                        if(X>0.0 and Y<0.0):
                            print("Q4")