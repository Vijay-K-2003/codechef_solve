#include <stdio.h>

int main() 
{
    int x = 546;
    unsigned char * pt = (unsigned char *) &x ;
    for (int i = 1; i < 2; i++)
    {
        printf("%x", pt[i]);
    }
     
}
