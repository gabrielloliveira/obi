#include <stdio.h>
int main(){
    int carta1, carta2, carta3, carta4, carta5;
    scanf("%d%d%d%d%d", &carta1, &carta2, &carta3, &carta4, &carta5);
    if(carta1<carta2 && carta2<carta3 && carta3<carta4 && carta4<carta5){
        printf("C");
    }else if(carta1>carta2 && carta2>carta3 && carta3>carta4 && carta4>carta5){
        printf("D");
    }else{
        printf("N");
    }
    return 0;
}
