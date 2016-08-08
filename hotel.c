#include <stdio.h>
int main(){
    int estadoinicial1, estadoinicial2, estadofinal1, estadofinal2;
    scanf("%d%d%d%d", &estadoinicial1, &estadoinicial2, &estadofinal1, &estadofinal2);
    if(estadoinicial1!= estadofinal1 && estadoinicial2==estadofinal2){
        printf("%d", 1);
    }
    else if(estadoinicial1!= estadofinal1 && estadoinicial2!= estadofinal2){
        printf("%d", 1);
    }else if(estadoinicial1==estadofinal1 && estadoinicial2==estadofinal2){
        printf("%d", 0);
    }else{
        printf("%d", 2);
    }
    return 0;
}
