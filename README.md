# PROIECT-MAP
# 8 Queens

## Description
The eight queens problem is the problem of placing eight queens on an 8×8 chessboard such that none of them attack one another (no two are in the same row, column, or diagonal). More generally, the n queens problem places n queens on an n×n chessboard.

There are different solutions for the problem.

## Algorithm

The N-Queens problem is a classic problem in which the goal is to place N queens on an NxN chessboard in such a way that no two queens threaten each other. A queen in chess can move any number of squares horizontally, vertically, or diagonally.

The program starts by defining a macro constant N with a value of 8.
In the main() function, it calls the solveNQ() function which then calls the solveNQUtil() function recursively to solve the problem.

The solveNQUtil() function is the recursive function that attempts to place queens on the board. The function takes as input an NxN board represented as a 2D array and an integer column (col). The function starts placing queens in the first column, then the second column and so on. If a queen can be placed on a square of the current column without threatening any other queen, the function places the queen and then recursively moves to the next column. If a queen cannot be placed on a square of the current column, the function backtracks by removing the queen and trying the next square of the same column. If the function successfully places queens in all columns, it returns true, indicating that a solution has been found. If the function cannot place queens in all columns, it returns false, indicating that no solution was found.

The isSafe() function is a helper function that checks if a queen can be placed on a square of a given column without threatening any other queen. The function takes as input an NxN board, a row and a column. The function first checks if any queen in the same row as the square threatens the square. Then it checks if any queen on the diagonal of the square threatens the square. If no queen threatens the square, the function returns true, otherwise it returns false.

The printSolution() function is a helper function that prints the board with 1's at the positions where queens are placed and 0's at the other positions.

In the end if the solveNQUtil returns false, that means solution is not possible and if it returns true solution exists and it will print it.

## Prerequisites


[Docker Desktop](https://www.docker.com/products/docker-desktop/)



## Deployment

To deploy this project run

bash
  docker run cosmina2902/myapp
