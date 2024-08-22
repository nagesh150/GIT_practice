#include <stdio.h>
#include <stdlib.h>

typedef struct test
{
    /* data */
    int x;
    float y;
}test_t;


int main() {
   char *p;
    printf("%d\n",sizeof(&p));
    
    return 0;    
}