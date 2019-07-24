#!/usr/bin/python3
#Island Perimeter Problem


def island_perimeter(grid):
#Function will find the perimeter of an island in a grid
    numZeros = 0

    for currentRowDex in range(len(grid)):
        for currentColDex in range(len(grid[0])):
            if grid[currentRowDex][currentColDex] == 1:

                numTopRowDex = currentRowDex - 1
                numLeftColDex = currentColDex - 1
                numBottomRowDex = currentRowDex + 1
                numRightColDex = currentColDex + 1

                if numTopRowDex < 0:
                    numTop = 0
                else:
                    numTop = grid[currentRowDex - 1][currentColDex]

                if numLeftColDex < 0:
                    numLeft = 0
                else:
                    numLeft = grid[currentRowDex][currentColDex - 1]

                if numBottomRowDex >= len(grid):
                    numBottom = 0
                else:
                    numBottom = grid[currentRowDex + 1][currentColDex]

                if numRightColDex >= len(grid[0]):
                    numRight = 0
                else:
                    numRight = grid[currentRowDex][currentColDex + 1]

                if numTop == 0:
                    numZeros += 1
                if numRight == 0:
                    numZeros += 1
                if numBottom == 0:
                    numZeros += 1
                if numLeft == 0:
                    numZeros += 1

    return numZeros
