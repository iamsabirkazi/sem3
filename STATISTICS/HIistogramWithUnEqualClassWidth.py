'''
draw histogram to represent following data

class   freq
30-40   7
40-50   12
50-70   20
70-100  15
100-140 12

'''
import matplotlib.pyplot as plt 
import numpy as np
limits=[30,40,50,70,100,140]
freq=[7,12,20,15,12]

widths=np.diff(limits)
density=freq/widths

plt.bar(limits[:-1],density,width=widths,color='red',edgecolor='black',align='edge')
plt.xlabel('clsss limits')
plt.ylabel('frequency density')
plt.title('freq for unequal class width')

plt.show()