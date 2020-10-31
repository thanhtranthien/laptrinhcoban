/*
Ví dụ 1-5. Chương trình đổi giá trị hai biến số nguyên x và y.
*/
#include <stdio.h>
main()
{
  int x, y, tg;
  printf("Nhap hai so nguyen ");
  scanf("%d %d", &x, &y);
  printf("Truoc khi doi x = %d, y = %d \n",x,y);
  tg = x;
  x = y;
  y = tg;
  printf("Sau khi doi x = %d, y = %d \n",x,y);
}

