T=int(input("write the number of tests here: "))
x="no"
prime1=""
prime2=""
if 1<=T<=100:
    for i in range(T):
        n=int(input("write here: "))
        if 2<=n<=1000000:
            for i in range(2,n):
                if n%i==0:
                    prime1=str(n) +"is not a prime number"
                else:
                    y=str(n)[::-1]
                    for i in range(2,int(y)):
                        if (int(y))%i==0:
                            prime2=str(y) +"is not a prime number"
                        else:
                            x="yes"
print(prime1)
print(prime2)
print(x)
               
