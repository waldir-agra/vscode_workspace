#include <stdio.h>

int main()
{
   int a = 10;
   int b,c;
   printf("a =%d &a = %p \n",a, &a);
   printf("b =%d &b = %p \n",b, &b);
   printf("c =%d &c = %p \n",c, &c);

   b = a;
   c = a+b;
   printf("a =%d &a = %p \n",a, &a);
   printf("b =%d &b = %p \n",b, &b);
   printf("c =%d &c = %p \n",c, &c);
return 0;
}