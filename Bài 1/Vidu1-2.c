/*
  Ví dụ 1-2. Chương trình nhập 1 ký tự in mã của ký tự đó.
*/
#include <stdio.h>
main()
{
  char c;
  printf("Nhap 1 ky tu");
  scanf("%c", &c);
  printf("Ma cua ky tu %c la: %d", c, c);
}
