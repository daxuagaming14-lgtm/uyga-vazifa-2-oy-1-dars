#include <stdio.h>

void jadval(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);

    jadval(n);
    return 0;
}