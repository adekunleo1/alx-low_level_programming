#!/usr/bin/python3
"""
The function island_perimeter
returns the perimeter of the island description in grid
"""


def island_perimeter(grid):
    """ returns the perimeter of the island """
    aux = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] is 1:
                aux += 4
                if x > 0 and grid[y][x - 1]:
                    aux -= 2
                if y > 0 and grid[y - 1][x]:
                    aux -= 2
    return aux
