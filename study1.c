/*
ビット演算子の例

$ ./study1.exe
11 AND 14 = 10
11 OR 14 = 15
11 XOR 14 = 5
NOT 11 = -12

*/

#include <stdio.h>

int main(void){
  short int a;
  short int b;

  a = 11;
  b = 14;

  printf("%d AND %d = %d", a, b, a & b);
  printf("\n");
  printf("%d OR %d = %d", a, b, a | b);
  printf("\n");
  printf("%d XOR %d = %d", a, b, a ^ b);
  printf("\n");
  printf("NOT %d = %d", a, ~a);

  return 0;
}