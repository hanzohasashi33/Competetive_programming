def nextMove(n, r, c, grid):
    pos_col_m = c
    pos_row_m = r
    pos_col_p = pos_row_p = 0
    for i in range(n):
        line = len(grid[i])
        for j in range(line):
            if grid[i][j] == 'p':
                pos_row_p = i
                pos_col_p = j
    if pos_row_m < pos_row_p:
        pos_row_m = pos_row_m + 1
        return 'DOWN'
    elif pos_row_m > pos_row_p:
        pos_row_m = pos_row_m - 1
        return 'UP'
    if pos_col_m < pos_col_p:
        pos_col_m = pos_col_m + 1
        return 'RIGHT'
    elif pos_col_m > pos_col_p:
        pos_col_m = pos_col_m - 1
        return 'LEFT'


n = int(input())
r, c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())
print(nextMove(n, r, c, grid))
