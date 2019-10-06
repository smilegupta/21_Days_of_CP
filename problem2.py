
def prime(n):
    while(n>0):
        f=0
        for i in range(2,n):
            if n%i==0:
                f=1
                break
        if f==0:
            return True
        return False
a=int(input())

for i in range(a):
    n0=int(input())
    n1=n0
    s1=0
    while(n1>0):
        s1=n1%10+10*s1
        n1//=10
    if prime(n0) and prime(s1):
        print("Yes")
    else:
        print("No")
