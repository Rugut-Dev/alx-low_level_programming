#!/usr/bin/python3
"""
Returns the perimeter of island described:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (
water inside that isn’t connected to the water around the island).
"""


def no_of_neighbrs(grid, i, j):
    """Count the no. of adjacent cells with val 1."""
    count = 0

    if i > 0 and grid[i-1][j] == 1:
        count += 1
    if j > 0 and grid[i][j-1] == 1:
        count += 1
    if i < len(grid)-1 and grid[i+1][j] == 1:
        count += 1
    if j < len(grid[0])-1 and grid[i][j+1] == 1:
        count += 1
    return count


def island_perimeter(grid):
    """Calculate the perimeter of island in the grid above."""
    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):

            if grid[i][j] == 1:
                perim += 4 - no_of_neighbrs(grid, i, j)
    return perim
