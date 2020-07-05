for _ in range(int(input())):
    a,b,c,d=map(int,input().split(" "))
    #print(a, b, c, d)
    if b+c>d: print(str(b)+" "+str(c)+ " " + str(d))
    else: print(str(a)+ " " + str(b) + " " + str(c))