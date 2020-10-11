import numpy as np
img = input().split(" ")
lum = 0
for i in range(len(img)):
    types = [int(i) for i in img[i].split(",")]
    lum += np.sum(types) / 3
print("day" if lum/len(img) > 90 else "night")
