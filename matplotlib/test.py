
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-3, 3, 50)
y1 = 2*x + 1
y2 = x**2

# set color, linewidth, linestyle
plt.figure()
plt.plot(x, y1, color='red', linewidth=1.0, linestyle='--')
plt.plot(x, y2)

# set range
plt.xlim((-1, 2))	# display range of x-axis: (-1, 2)
plt.ylim((-2, 3))

# set lable
plt.xlabel('I am x')	# set label of x-axis as 'I am x'
plt.ylabel('I am y')	

# set ticks
ticks_1 = np.linspace(-1, 2, 5)	# set ticks_1(刻度1) = 5 ticks ranging from -1 to 2
plt.xticks(ticks_1)	# set the ticks of x-axis as ticks_1
plt.yticks([-2, -1.8, -1, 1.22, 3,],['really bad', 'bad', 'normal', 'good', 'really good'])	# for y axis, respectively set the ticks [-2, -1.8, -1, 1.22, 3,] as ['really bad', 'bad', 'normal', 'good', 'really good'])

# set location 
ax = plt.gca()	# get current axis
ax.spines['right'].set_color('none')	# remove the right spines
ax.spines['top'].set_color('none')
ax.xaxis.set_ticks_position('bottom')	# x axis = botom spines
ax.yaxis.set_ticks_position('left')	# y axis = left spines
ax.spines['bottom'].set_position(('data', 0))	# move x axis to the line that y = 0
ax.spines['left'].set_position(('data', 0))	# move y axis to the line that x = 0


plt.show()
