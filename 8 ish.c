#include <stdio.h>

int boluvchilar(int n) {
    int soni = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            soni++;
        }
    }
    return soni;
}

int main() {
    int n;
    printf("Musbat son kiriting: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Musbat son kiriting!\n");
        return 0;
    }
    printf("Bo'luvchilar soni: %d\n", boluvchilar(n));
    return 0;
}