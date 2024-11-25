#include <stdio.h>
int main() {
    int n;
    int tong = 0;
    printf("Nhap vao 1 so nguyen duong: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong tu 1 denn %d là: %d\n", n, tong);

    return 0;
}

