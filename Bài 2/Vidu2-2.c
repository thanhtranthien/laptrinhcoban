/*
  Ví dụ 2-2 Chương trình tìm số lớn trong hai số
*/
#include <stdio.h>
main()
{
  int a, b, max;
  printf(“Nhap hai so “);
  scanf(“%d %d”, &a, &b);
  max = a;
  if (max < b)
    max = b;
  printf(“Max = %d”,max); 
}
