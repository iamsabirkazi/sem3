'''
draw pie diagram to represent following data showing no of student admitted for different courses

course          no of stu
arts            400
commerse        375
science         540
computer        920
data science    60

'''

import matplotlib.pyplot as plt 

heads=['arts','commerse','science','computer','data science']
value=[400,375,540,920,60]

plt.pie(value,labels=heads,autopct='%11f%%')

plt.title('Pie chart showing no of students admitted')

plt.show()