/* 
シフト演算子の例 

user@user-PC MSYS ~
$ gcc study2.c -o study2

user@user-PC MSYS ~
$ ./study2.exe

11 << 2 = 44
11 >> 2 = 2
-11 << 1 = -22
-11 >> 1 = -6

*/

#include <stdio.h>

int main(void){
  short int a;

  a = 11;

  printf("%d << 2 = %d", a, a << 2);
  printf("\n");
  printf("%d >> 2 = %d", a, a >> 2);
  printf("\n");

  a = -11;

  printf("%d << 1 = %d", a, a << 1);
  printf("\n");
  printf("%d >> 1 = %d", a, a >> 1);
  printf("\n");
  return 0;
}