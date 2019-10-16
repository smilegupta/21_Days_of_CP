def checkpr(n):
    while(n>0):
        flag=0
        for i in range(2,n):
            if n%i==0:
                flag=1
                break
        if flag==0:
            return True
        else: return False
tc=int(input("no of test cases"))
for i in range(tc):
    n0=int(input("enter an integer"))
    n1=n0
    s1=0
    while(n1>0):
        s1=n1%10+10*s1
        n1//=10
    if checkpr(n0) and checkpr(s1)==True:
        print("Yes")
    else: print("No")
