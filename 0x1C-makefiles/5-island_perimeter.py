#!/usr/bin/python3
""" calculates perimeter of island """


def island_perimeter(grid):
    """ calculates perimeter of island """
    if (grid == [] or grid == [[]]):
        return 0
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0
    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                size += 1
            if (row > 0 and grid[row - 1][col] == 1):
                edges += 1
            if (col > 0 and grid[row][col - 1] == 1):
                edges += 1
    return size * 4 - edges * 2
