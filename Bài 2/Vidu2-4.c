/*
  Ví dụ 2-4 Đọc số 1 chữ số thành chữ

*/
#include <stdio.h>
main()
{
  int so;
  printf("Nhap 1 so ");
  scanf("%d", &so);
  switch (so)
  {
    0: printf(“Không”); break;
    1: printf(“Một”); break;
    2: printf(“Hai”); break;
    3: printf(“Ba”); break;
    4: printf(“Bốn”); break;
    5: printf(“Năm”); break;
    6: printf(“Sáu”); break;
    7: printf(“Bảy”); break;
    8: printf(“Tám”); break;
    9: printf(“Chín”); break;
    default:
      printf(“Chưa biết”); 
  }
}
