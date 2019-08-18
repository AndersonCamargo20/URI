l=[]
par=0
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))
l.append(int(input()))

for n in l:
    if (n % 2 == 0):
        par= par+1

print(par,"valores pares")