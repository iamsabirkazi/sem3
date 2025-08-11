def prime(n:int) -> int:
	for i in range(2,n):
		 if(n%i==0):
		 	return False
	else:
		return True

if prime(int(input("Enter Number:"))):
	print("Number is prime.")
else:
	print("Number is not prime.")