def check(num):
    for y in range(2,(num // 2 + 1)):
        if num % y == 0 :
           return False
        else:
            return True
def rev(Number):
    Reverse = 0    
    while(Number > 0):    
        Reminder = Number %10    
        Reverse = (Reverse *10) + Reminder    
        Number = Number //10 
    return Reverse

for x in range(int(input())):
    num = int(input()) 
    if check(num) and check(rev(num)):
       print("Yes")
    else:
        print("No")
