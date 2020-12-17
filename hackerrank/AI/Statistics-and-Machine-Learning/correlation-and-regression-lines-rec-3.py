def mean(data):
    return sum(data) / len(data)


physics = [15.0, 12.0, 8.0, 8.0, 7.0, 7.0, 7.0, 6.0, 5.0, 3.0]
history = [10.0, 25.0, 17.0, 11.0, 13.0, 17.0, 20.0, 13.0, 9.0, 15.0]
mean_physics = mean(physics)
mean_history = mean(history)
var_physics = sum([(p - mean_physics) ** 2 for p in physics])
sum_phy_his = 0
for i in range(len(physics)):
    sum_phy_his += (physics[i] - mean_physics) * (history[i] - mean_history)
b = sum_phy_his / var_physics
a = mean_history - b * mean_physics
result = b * 10 + a
print(round(result, 1))
