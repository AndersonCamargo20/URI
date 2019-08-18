precos=[4.0, 4.5, 5.0, 2.0, 1.5]

c, q = [ x for x in input().split()]

print("Total: R$ {:.2f}".format(precos[int(c)-1]*float(q)))