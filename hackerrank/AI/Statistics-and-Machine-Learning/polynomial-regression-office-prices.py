from sklearn import linear_model
from sklearn.preprocessing import PolynomialFeatures
import numpy as np
features, rows = map(int, input().split())
X, Y = [], []
for i in range(rows):
    x = [0]
    elements = list(map(float, input().split()))
    for j in range(len(elements)):
        if j < features:
            x.append(elements[j])
        else:
            Y.append(elements[j])
    X.append(x)
poly = PolynomialFeatures(degree=3)
model = linear_model.LinearRegression()
model.fit(poly.fit_transform(np.array(X)), Y)
new_rows = int(input())
new_X = []
for i in range(new_rows):
    x = [0]
    elements = list(map(float, input().split()))
    for j in range(len(elements)):
        x.append(elements[j])
    new_X.append(x)
result = model.predict(poly.fit_transform(np.array(new_X)))
for i in range(len(result)):
    print(round(result[i], 2))
