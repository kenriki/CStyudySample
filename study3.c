/* 
配列の使い方の例 

user@user-PC MSYS ~
$ ./study3.exe
1人目の成績です
算数の点数は72です
国語の点数は67です
社会の点数は84です
2人目の成績です
算数の点数は67です
国語の点数は92です
社会の点数は71です


*/

#include <stdio.h>

int main(void){
  int seiseki[][3] = {{72, 67, 84}, {67, 92, 71}};
  int i;

  for (i = 0 ; i < 2 ; i++){
    printf("%d人目の成績です", i + 1);
  	printf("\n");
    printf("算数の点数は%dです", seiseki[i][0]);
  	printf("\n");
    printf("国語の点数は%dです", seiseki[i][1]);
  	printf("\n");
    printf("社会の点数は%dです", seiseki[i][2]);
  	printf("\n");
  }

  return 0;
}