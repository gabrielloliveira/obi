#include <stdio.h>
int main(){
    int pressao_desejada, pressao_lida, resultado;
    scanf("%d", &pressao_desejada);
    scanf("%d", &pressao_lida);
    resultado = pressao_desejada-pressao_lida;
    printf("%d", resultado);
    return 0;
}
