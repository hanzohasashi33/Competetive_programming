import sys
import pandas as pd
from sklearn import linear_model
import matplotlib.pyplot as plt
dataset = pd.read_csv('dataset/trainingdata.txt', header=None)
plt.plot(dataset.iloc[:, 0], dataset.iloc[:, 1], 'ro')
plt.ylabel('Laptob Battery Life')
plt.show()
dataset = dataset[dataset.iloc[:, 1] < 8]
dataset.insert(0, len(dataset.columns), 0)
X = dataset.iloc[:, 0:2].as_matrix()
Y = dataset.iloc[:, 2].as_matrix()
model = linear_model.LinearRegression()
model.fit(X, Y)
timeCharged = float(input().strip())
result = model.predict([[0, timeCharged]])
if result[0] > 8:
    print(8.0)
else:
    print(round(result[0], 2))
