#!/usr/bin/python
import ipdb
matrix=[]
#data=open('input')
#for line in data:
#    x=[int(d) for d in line[:-1]]
#    matrix.append(x)

for x in range(9):
    x=[int(d) for d in input()]
    matrix.append(x)

def row_check():
    for i in range(9): # rows in matrix
        for j in range(1,10): # numbers in matrix
            if j not in matrix[i]:
                if matrix[i].count(0)==1:
                    matrix[i][matrix[i].index(0)]=j
                    break
#

def transpose(matrix):
    matrix_tras=[]
    for i in range(9):
        col=[]
        for j in range(9):
            col.append(matrix[j][i])
        matrix_tras.append(col)
    return matrix_tras


def is_invalid(matrix):
    for row in matrix:
        if 0 in row:
            return True
    return False

while is_invalid(matrix):
    row_check()
    if not is_invalid(matrix):
        break
    matrix=transpose(matrix)
    row_check()
    matrix=transpose(matrix)

for x in matrix:
    line=[str(d) for d in x]
    print("".join(line))

