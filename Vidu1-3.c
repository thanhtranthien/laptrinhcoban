#include <stdio.h>
main()
{
  float x, y, tong, hieu, tich, thuong;
  printf("Nhap hai so thuc ");
  scanf("%f %f", &x, &y);
  tong = x + y;
  hieu = x - y;
  tich = x * y;
  thuong = x / y;
  printf("%f + %f = %10.4f \n", x, y, tong);
  printf("%f - %f = %10.4f \n", x, y, hieu);
  printf("%f * %f = %10.4f \n", x, y, tich);
  printf("%f / %f = %10.4f \n", x, y, thuong); 
}
