#include <stdio.h>
int main(){
    int a;
    int b=16;
    scanf("%d",&a);
    printf("第五个二进制位变成0： %d\n ",~(~a|b));
    printf("第五个二进制位变成1： %d\n ",a|b);
    printf("第五个二进制位取反 ： %d\n ",a^b);
}