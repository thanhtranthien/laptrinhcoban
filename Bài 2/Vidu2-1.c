/* 
  Ví dụ 2.1 Chương trình tìm số lớn trong hai số
*/
#include <stdio.h>
main()
{
  int a, b, max;
  printf(“Nhap hai so “);
  scanf(“%d %d”, &a, &b);
  if (a>b)
    max = a;
  else
    max = b;
  printf(“Max = %d”,max); 
}
