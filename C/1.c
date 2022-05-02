#include <stdio.h>

int main() {
   int x;
   int y = 1;
   int sum = 0;

   printf("정수를 입력하시오 : ");

   scanf("%d", &x);
   
   while (y <= (x - 1)) {
      if (x % y == 0)
         sum += y;
      y++;
   } 
   printf("%d", sum);

   if (sum == x)
      printf("%d는 완전수 입니다.", x);
   else
      printf("%d는 완전수가 아닙니다.", x);
   
   return 0;
}