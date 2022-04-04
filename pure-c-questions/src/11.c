#include <stdio.h>

int* inc(int val)
{
  int a = val;
  a++;
  return &a;
}

int main(void)
{
    int a = 10;

    int *val = inc(a);

    printf("\n Incremented value is equal to [%d] \n", *val);

    return 0;
}
