/* 
  Bài 1.Viết chương trình nhập vào chiều dài, rộng và cao của một khối lập phương là các số nguyên. Tính và in lên màn hình thể tích của khối lập phương đó.
*/
#include <stdio.h>
main()
{
   int dai, rong, cao, theTich;
   printf(“Nhap dai, rong, cao: “);
   scanf(“%d %d %d”, &dai, &rong, &cao);
   theTich = dai * rong * cao;
   printf(“The tich hinh lap phuong: %d”, theTich); 
}
