#include <stdio.h>
int main() {
    printf("bang cuu chuong tu 1 den 9:\n");
    for (int n = 1; n <= 9; n++) {
        printf("Bang cuu chuong %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}

