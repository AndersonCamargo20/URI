n = int(input())

count = 0
test = n
while(count != 6):
    if(test % 2 != 0):
        count = count + 1
        print(test)
    test = test + 1