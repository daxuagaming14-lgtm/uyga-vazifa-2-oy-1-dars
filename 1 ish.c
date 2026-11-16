#include <stdio.h>

const  int Yil=2026;

int yosh(int a){
    return Yil-a;
    
}

int main() {
    int a;
    printf("Togilgan yilizni kiriting: ");
    scanf("%d",&a);

    printf("%d\n",yosh(a));

        return 0;
}