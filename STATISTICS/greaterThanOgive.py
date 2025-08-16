'''
draw less than ogive
class   freq
10-20   3
20-30   7
30-40   14
40-50   22
50-60   20
60-70   11
70-80   4

'''

import matplotlib.pyplot as plt 
import numpy as np

limits=[10,20,30,40,50,60,70,80]
freq=[3,7,14,22,20,11,14]

revFreq=list(reversed(freq))
gcf=np.cumsum(revFreq)
newGcf=np.insert(gcf,0,0)
revNewGcf=list(reversed(newGcf))

plt.plot(limits,revNewGcf,marker='o',linestyle='-',color='red')
plt.xlabel("class limits")
plt.ylabel('gcf')
plt.title('greater than ogive')


plt.show()