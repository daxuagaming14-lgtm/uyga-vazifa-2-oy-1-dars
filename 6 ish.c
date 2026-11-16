#include <stdio.h>

int raqamlarSoni(int n) {
    int soni = 0;
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        return 1;
    }
    while (n > 0) {
        soni++;
        n /= 10;
    }
    return soni;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar soni: %d\n", raqamlarSoni(n));
    return 0;
}