#include <stdio.h>
int main(){
    int competidores, quantidade_folhas, quantidade_folhas_receber;
    scanf("%d%d%d", &competidores, &quantidade_folhas, &quantidade_folhas_receber);
    if(quantidade_folhas_receber*competidores<= quantidade_folhas){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
