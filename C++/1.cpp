#include <stdio.h>

int main() {
    int x ;
    int y ;
    int sum ;

    printf("첫 번째 숫자 입력 : ") ;
    scanf("%d", &x);

    printf("두 번째 숫자 입력 : ") ;
    scanf("%d", &y);

    sum = x + y ;
    printf("두 수의 합 : %d", sum) ;

    return 0;
}