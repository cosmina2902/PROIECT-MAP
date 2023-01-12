#include <stdio.h>
#include <stdbool.h>

#define N 8

int board[N][N];
int solutions;

bool isValidMove(int row, int col) {
    
    for (int i = 0; i < row; i++) {
        if (board[i][col]) {
            return false;
        }
    }


    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int row) {
    if (row == N) {
        printBoard();
        solutions++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (isValidMove(row, i)) {
            board[row][i] = 1;
      
	        solve(row + 1);
            board[row][i] = 0;
        }
    }
}

int main() {
    solve(0);
    return 0;
}