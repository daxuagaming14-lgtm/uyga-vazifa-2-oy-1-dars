
#include <stdio.h>

int  musbatmi(int a){
    if (a>0){
        return 1;
    }else if (a<0) {
        return 0;
    }
    
}

int main() {
    int a;
    printf("Son kiriting: ");
    scanf("%d",&a);

    printf("%d",musbatmi(a));
    return 0;
}