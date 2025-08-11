from functools import reduce
num = [i for i in range(10)]
res=reduce(lambda s,q: s+q,num)

print(res)