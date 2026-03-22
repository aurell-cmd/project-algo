#include <stdio.h>

int main() {
    int n = 5;
    int pascal[20][20] = {0};

    for (int i = 0; i < n; i++) {
        pascal[i][0] = pascal[i][i] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int spasi = 0; spasi < n - i - 1; spasi++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d   ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}