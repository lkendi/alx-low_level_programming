#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """Calculates the perimeter of an island represented as a grid

    Args:
        grid: 2D list where 0 represents water and 1 represents  land

    Returns:
        The perimeter of the island
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                # check if cell above is land
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                # check if cell to the left is land
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
