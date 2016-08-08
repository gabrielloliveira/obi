#include <stdio.h>
int main(){
    int grito, mao1, mao2;
    scanf("%d", &grito);
    scanf("%d", &mao1);
    scanf("%d", &mao2);
    if(mao1+mao2%2==grito){
        printf("%d", 0);
    }else{
        printf("%d", 1);
    }
    return 0;
}
