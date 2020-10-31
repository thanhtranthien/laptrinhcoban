/*
  Bài 1-2. Viết chương trình nhập vào hai ký tự. Cho biết giữa hai ký tự đó cách nhau bao nhiêu ký tự.
*/
#include <stdio.h>
#include <math.h>
main()
{
   char kyTu1, kyTu2;
   int khoangCach;
   printf(“Nhap hai ky tu: “);
   scanf(“%c %c”, &kyTu1, &kyTu2);
   khoangCach = abs(kyTu1 – kyTu2);
   printf(“Khoang cach: %d”, khoangCach); 
}
