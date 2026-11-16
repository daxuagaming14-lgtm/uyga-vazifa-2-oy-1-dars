#include <stdio.h>

int teskari(int n) {
    int natija = 0;
    while (n > 0) {
        natija = natija * 10 + n % 10;
        n /= 10;
    }
    return natija;
}

int main() {
    int n;
    printf("Musbat son kiriting: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Musbat son kiriting!\n");
        return 0;
    }
    printf("Teskari son: %d\n", teskari(n));
    return 0;
}