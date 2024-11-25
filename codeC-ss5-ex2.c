#include <stdio.h>
int main() {
    int a = 35;
    int b;
    do {
        printf("Nhap mot so: ");
        scanf("%d", &b);
        if (b != a) {
            printf("sai roi");
        }
    } while (b != a);
    printf("chinh xac\n");

    return 0;
}

