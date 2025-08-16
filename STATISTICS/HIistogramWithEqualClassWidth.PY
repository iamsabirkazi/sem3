"""
que->draw histogram for data given below:

class   freq
15-25   9
25-35   13
35-45   17
45-55   15
55-65   10
65-75   4

"""
import matplotlib.pyplot as plt 

limits=[15,25,35,45,55,65,75]
freq=[9,13,17,15,10,4]

plt.bar(limits[:-1],freq,width=10,color='red',edgecolor='black',align='edge')
plt.xlabel('clsss limits')
plt.ylabel('histogram freq equal class width')

plt.show()