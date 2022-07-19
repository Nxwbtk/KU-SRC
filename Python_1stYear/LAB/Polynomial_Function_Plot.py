# importing package
import matplotlib.pyplot as plt
import numpy as np

def line(x):
    fx = []
    for i in range(len(x)):
        y = 50 * abs(x[i]) + 5
        fx.append(y)
    return fx

def polynomial1(x):
    fx = []
    for i in range(len(x)):
       y = x[i]**2 - 2*x[i] + 5
       fx.append(y)
    return fx

def polynomial2(x):
    fx = []
    for i in range(len(x)):
       y = 3 * x[i]**2 - 2*x[i]
       fx.append(y)
    return fx

x = np.linspace(-100,100,num=1000)
y1 = polynomial1(x)
y2 = polynomial2(x)
y3 = line(x)

a1 = sum(y1)/1000
a2 = sum(y2)/1000
a3 = sum(y3)/1000
plt.plot(x,y1, label = "polynomial 1")
plt.plot(x,y2, label = "polynomial 2")
plt.plot(x,y3, label = "line")

plt.legend()
plt.show()