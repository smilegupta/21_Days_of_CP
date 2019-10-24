def pr(a):
    for i in range(2, a):
        if (int(a) % i) == 0:
            return False
    else:
        return True


c = 0
n = int(input('enter number of times you want top test the program'))
if 1 <= n <= 100:
    while c < n:
        ele = int(input('enter number here'))
        if 2 <= ele <= 100000:
            c += 1
            if pr(ele) is True:
                el1 = str(ele)
                el = int(el1[::-1])
                if pr(el) is True:
                    print('yes')
                else:
                    print('no')
            else:
                print('no')
        else:
            print('invalid input try again')
else:
    print('please choose test in between 1 and 100')
