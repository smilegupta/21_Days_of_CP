#problem 2

def checkprime(n):
    b = False
    if n%2 == 0 and n!=2:
        b = False
    elif n == 2 or n == 3:
        b = True
    else:
        for i in range (3,n//2, 2):
            if n%i == 0:
                b = False
                break
            else:
                b = True
    return b

def reverse(n):
    m = ""
    while n>0:
        m += str(n%10)
        n = n//10
    return int(m)

t = int(input())    #test cases
if t>=1 and t<=100:
    for i in range (t):
        n = int(input())
        if n>=2 and n<=100000:
            f = checkprime(n)
            if f == True:
                n = reverse(n)
                fl = checkprime(n)
                if fl == True:
                    print("Yes")
                else:
                    print("No")
            else:
                print("No")
        
