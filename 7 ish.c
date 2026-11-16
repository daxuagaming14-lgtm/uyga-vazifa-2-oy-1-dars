#include <stdio.h>

int kichikSon(int a,int b,int c) {
    if(a<b && a<c){
        printf("%d",a);
    } else if (b<a && b<c){
        printf("%d",b);
    } else if(c<a && c<b){
        printf("%d",c);
    } 
}

int main() {
    int a,b,c;
    printf("Sonlarni kiriting: ");
    scanf("%d %d %d", &a,&b,&c);

    printf("Eng kichigi: ");
    kichikSon(a,b,c);
    return 0;
}