#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *a;
    a = valloc(10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%p\n", &a[i]);
    }
    return 0;
}
