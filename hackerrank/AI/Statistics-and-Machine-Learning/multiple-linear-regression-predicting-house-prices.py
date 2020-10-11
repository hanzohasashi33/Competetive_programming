from sklearn import linear_model
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
model = linear_model.LinearRegression()
model.fit(X, Y)
a = model.intercept_
b = model.coef_
new_rows = int(input())
new_X = []
for i in range(new_rows):
    x = [0]
    elements = list(map(float, input().split()))
    for j in range(len(elements)):
        x.append(elements[j])
    new_X.append(x)
result = model.predict(new_X)
for i in range(len(result)):
    print(round(result[i], 2))
