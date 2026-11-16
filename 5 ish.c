#include <stdio.h>


int yigindi(int n){
    int sum=0;
    for (int i=1;i<=n;i++) {
        sum+=i;
        
    } return sum;
}



int main() {
    int n;
    printf("son kiriting: ");
    scanf("%d",&n);

    printf("%d",yigindi(n));
    return 0;
}