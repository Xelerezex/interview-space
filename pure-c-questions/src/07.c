#include <stdio.h>

int func(void *ptr)
{
    printf("%p \n", ptr);

    return 7;
}

int main()
{
    char z = 'c';
    char * ptr = &z;
    int a = func(ptr);

    printf("%d \n", a);
}
