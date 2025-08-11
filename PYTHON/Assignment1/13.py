import itertools
#count
print("Count():")
for i in itertools.count(10,10):
 	if i == 100:
 		break
 	else:
 		print(i, end ="\n")

#cycle
print("\ncycle():")
count = 0
for i in itertools.cycle('SWEET'):
	if count > 7:
		break
	else:
		print(i, end = " ")
		count +=1

#repeat
print("\n\nrepeat():")
print (list(itertools.repeat('SABIR', 4)))