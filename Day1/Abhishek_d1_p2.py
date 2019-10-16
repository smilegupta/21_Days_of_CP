def isprime(n):
    flag=0
    for i in range(2,int(n/2)+1):
        if n%i==0:
            flag=1

    if flag==0:
        return "yes"
    else:
        return "no"
def rev_no(n):
    rem=0
    rev=0
    while n>0:
        rem=n%10
        rev=rev*10+rem
        n=n//10
    return rev
T=int(input())
to_be_chk=[]
for i in range(T):
    to_be_chk.append(int(input()))
for i in to_be_chk:
    if (isprime(i)=="yes" and isprime(rev_no(i))=="yes"):
        print("Yes")
    else:
        print("No")

    
