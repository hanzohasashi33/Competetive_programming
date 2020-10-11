import math as m


def mean(data):
    return sum(data) / len(data)


def var(data):
    sum = 0
    for i in range(len(data)):
        sum = sum + (data[i] - mean(data)) ** 2
    return sum


def cov(dt1, dt2):
    sum = 0
    for i in range(len(dt1)):
        sum += (dt1[i] - mean(dt1)) * (dt2[i] - mean(dt2))
    return sum


physics = [15.0, 12.0, 8.0, 8.0, 7.0, 7.0, 7.0, 6.0, 5.0, 3.0]
history = [10.0, 25.0, 17.0, 11.0, 13.0, 17.0, 20.0, 13.0, 9.0, 15.0]
mean_physics = mean(physics)
mean_history = mean(history)
var_physics = var(physics)
var_history = var(history)
cov = cov(physics, history)
std = m.sqrt(var_physics * var_history)
r = cov / std
print(round(r, 3))
