#include <stdio.h>
typedef int* integer_pointer;
int main()
{
   int a = 0;
   while (a < 200)
   {
       printf("%d : %c", a, (char) a);
   }
   
}
