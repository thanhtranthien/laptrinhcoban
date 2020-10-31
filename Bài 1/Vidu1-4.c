/*
  Ví dụ 1-4. Chương trình nhập số đo một góc bằng độ. Tính và in lên màn hình sin của góc đó.

*/
#include <stdio.h>
#include <math.h>
main()
{
  int gocDo;
  float gocRadian, gtSin;
  printf("Nhap so do 1 goc ");
  scanf("%d", &gocDo);
  gocRadian = gocDo*M_PI/180;
  gtSin = sin(gocRadian);
  printf("sin(%d) = %f",gocDo, gtSin);
}

