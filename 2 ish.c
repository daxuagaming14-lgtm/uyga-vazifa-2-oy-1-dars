#include <stdio.h>

int yuza(int a,int b){
    return a*b;
    
}

int main() {
    int a,b;
    printf("Uzunligi va kengligini kiriting: ");
    scanf("%d %d",&a,&b);

    printf("Yuzasi: %d\n",yuza(a,b));

        return 0;
}