import itertools
#accumulate()
print("accumulate():")
a = [1, 2, 3, 4]
print(list(itertools.accumulate(a)))

#groupby()
print("\ngroupby():")
L = [("a", 1), ("a", 2), ("b", 3), ("b", 4)] 
key_func = lambda x: x[0] 
for key, group in itertools.groupby(L, key_func):
	print(key + " :", list(group))

#cain()
print("\ncain():")
list_1 = ["S", "Q"]
list_2 = [3,1,4,6]
s = "SABIR"
for p in itertools.chain(list_1, list_2, s):
	print(p)