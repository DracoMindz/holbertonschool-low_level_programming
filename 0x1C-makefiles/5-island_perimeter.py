#!/usr/bin/python3

numZeros = 0

for  currentRowDex in range(len(grid)):
    for currentColDex in range(len(grid[0])):
        if grid[cirrentRowDex][currentColDex] == 1:

            numTopRowDex = currentRowDex - 1
            numLeftColDex = currentColDex - 1
            numBottomRowDex = currentRowDex + 1
            numRightColDex = currentColDex + 1
            
            if numTopRowDex < 0:
                numTop = 1
            else:
                numTop = grid[currentRowDex - 1]
        [currentColDex]

            if numLeftColDex < 0:
                numLeft = 1
            else:
                numLeft = grid[currentRowDex]
        [currentColDex - 1]

            if numBottomTowDex >= len(grid):
                numberBottom = 1
            else:
                numBottom = grid[currentRowDex + 1]
        [currentColDex]

            if numRightColDex >= len(grid[0]):
                numberRight = 1
            else:
                numRight = grid[ currentRowDex]
        [currentColDex + 1]
        
            if numTop == 0:
                numZeros += 1
            if numRight == 0:
                numZeros += 1
            if numBottom == 0:
                numZeros +=1
            if numLeft == 0:
                numZeros += 1

        print(numZeros)
            
            

