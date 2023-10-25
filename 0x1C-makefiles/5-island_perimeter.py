#!/usr/bin/python3
'''Function calculates the perimeter of an island in a grid.'''


def island_perimeter(grid):
    '''Return perimeter of an island.
    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of integers representing an island.
    Returns:
        Perimeter of island defined in grid.'''
    
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for e in range(height):
        for k in range(width):
            if grid[e][k] == 1:
                size += 1
                if (k > 0 and grid[e][k - 1] == 1):
                    edges += 1
                if (e > 0 and grid[e - 1][k] == 1):
                    edges += 1
    return size * 4 - edges * 2
