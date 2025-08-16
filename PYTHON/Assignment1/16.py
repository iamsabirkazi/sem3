import itertools

#dropwhile()

def show(x):
	return x < 5

data = [1, 2, 3, 5, 6, 7,4,2]

result = itertools.dropwhile(show, data)

print("dropwhile():")
for num in result:
	print(num)


#filterfalse()

def is_even(n):
	return n % 2 == 0

numbers = [1, 2, 3, 4, 5, 6, 7, 8]
result = itertools.filterfalse(is_even, numbers)

print("filterfalse():")
for num in result:
	print(num)

#isslice()

numbers = range(20)
selected = itertools.islice(numbers, 0, 7, 3)
print("isslice():")
for num in selected:
	print(num)