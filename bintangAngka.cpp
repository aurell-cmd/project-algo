#include <stdio.h>

int main() {
    int left[5]  = {7, 15, 27, 42, 59};
    int right[5] = {10, 18, 24, 28, 30};

    for (int i = 0; i < 5; i++) {
        // cetak bintang
        for (int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        // cetak angka kiri dan kanan
        printf("%d %d\n", left[i], right[i]);
    }
    return 0;
}