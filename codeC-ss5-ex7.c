#include <stdio.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;
    printf("Nhap so nguyen duong thu 1: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen duong thu 2: ");
    scanf("%d", &so2);
    int ucln = UCLN(so1, so2);
    printf("UCLN cua %d va %d la: %d\n", so1, so2, ucln);

    return 0;
}

