#!/usr/bin/python3
def island_perimeter(grid):
    """
        Function that returns perimeter of the island
        described in grid.
        grid is a list of integers.
        1-water zone
        0-land zone
    """
    perimeter = 0
    R = len(grid)
    C = len(grid[0])
    for i in range(0, R):
        for j in range(0, C):
            if (grid[i][j] == 1):
                if i == 0:
                    perimeter += 1
                if  j == 0:
                    perimeter += 1
                if (grid[i-1][j] == 0):
                    perimeter += 1
                if (grid[i + 1][j] == 0):
                    perimeter += 1
                if (grid[i][j-1] == 0):
                    perimeter += 1
                if (grid[i][j+1] == 0):
                    perimeter += 1
    return perimeter
