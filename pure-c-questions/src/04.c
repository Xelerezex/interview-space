#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *ptr = (char*)malloc(10);

    if(NULL == ptr)
    {
        printf("\n Malloc failed \n");
        return;
    }
    else
    {
        // Do some processing
    }

    return;
}
