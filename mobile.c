#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if(a==b+c+d && d== b+c && b==c){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
