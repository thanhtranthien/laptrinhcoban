/*
  Vi du 2-3 Chương trình nhập 1 ký tự là chữ cái thường, cho biết đó là nguyên âm hay phụ âm.
  */
#include <stdio.h>
main()
{
  char kt;
  printf("Nhap 1 ky tu ");
  scanf("%c", &kt);
  switch (kt)
  {
   case ‘a’:
   case ‘e’:
   case ‘i’:
   case ‘o’:
   case ‘u’:
	    printf(“Nguyen am”);
	    break;
   default:
	    printf(“Phu am”);
  }
}
