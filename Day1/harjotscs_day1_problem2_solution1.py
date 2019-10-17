t=eval(input())
l=[]
for i in range(0,t):
    l.append(eval(input()))
for i in range(0,t):
    n=l[i]
    b = n
    r = 0
    k = 0

    while n > 0:
        a = n % 10
        r = r * 10 + a
        n = n // 10
    n = b
    for i in range(1, n + 1):
        if n % i == 0:
            k = k + 1

    for i in range(1, r + 1):
        if r % i == 0:
            k = k + 1
    if k == 4:
        print("YES")
    else:
        print("NO")
