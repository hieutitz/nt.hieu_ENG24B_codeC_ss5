#include <stdio.h>

int BCNN(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int so1, so2;
    printf("Nhap so nguyen duong thu 1: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen duong thu 2: ");
    scanf("%d", &so2);

    if (so1 <= 0 || so2 <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }

    int bcnn = BCNN(so1, so2);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", so1, so2, bcnn);
    return 0;
}

