from itertools import *

#permutation()
print("permutation():")
for item in permutations("SABIR", r=2):
	print(item)

#combination()
print("combination():")
for item in combinations(['S','A','B','I','R'], r=2):
	print(item)

#product()
print("product():")
for item in product(['S','A','B','I','R'], repeat=2):
	print(item)