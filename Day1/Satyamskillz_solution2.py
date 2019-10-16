t=int(input())
for _ in range(t):
	def isprime(n):
		if(n<=1):
			return False
		temp=0
		for i in range(2,int(n**(0.5))+1):
			if (n%i==0):
				temp=1
		if(temp==0):
			return True
		else:
			return False
	i=int(input())
	si=str(i)[::-1]
	ri=int(si)
	if(isprime(i)==True and isprime(ri)==True):
		print("Yes")
	else:
		print("No")
	
