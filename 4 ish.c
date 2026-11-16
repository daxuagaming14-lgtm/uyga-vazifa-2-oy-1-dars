
#include <stdio.h>

int  oxirgiRaqam(int a){
      if (a<0){
          a = -a;
      } return a%10;
    
    } 
    


int main() {
    int a;
    printf("Son kiriting: ");
    scanf("%d",&a);

    printf("%d",oxirgiRaqam(a));
    return 0;
}