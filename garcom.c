#include <stdio.h>
int main(){
    int numero_de_bandejas, latas, copos, copos_quebrados;
    copos_quebrados = 0;
    scanf("%d", &numero_de_bandejas);
    for(int i = 1; i<=numero_de_bandejas; i++){
        scanf("%d%d", &latas, &copos);
        if(latas>copos){
            copos_quebrados +=copos;
        }
    }
    printf("%d", copos_quebrados);
    return 0;
}
