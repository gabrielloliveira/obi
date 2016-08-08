#include <stdio.h>
int main(){
    int comp1, larg1, comp2, larg2, area1, area2;
    scanf("%d", &comp1);
    scanf("%d", &larg1);
    scanf("%d", &comp2);
    scanf("%d", &larg2);
    area1 = comp1*larg1;
    area2 = comp2*larg2;
    if(area1 > area2){
        printf("&d", area1);
    }else{
        printf("%d", area2);
    }
    return 0;
}
