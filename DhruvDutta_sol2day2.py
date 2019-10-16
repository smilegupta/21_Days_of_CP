x,y=input().split(" ")
X=int(x)
Y=float(y)
if X%5==0:
    if (X+0.5)<=Y:
        print(Y-X-0.5)
    else:
        print(Y)
else:
    print(Y)
