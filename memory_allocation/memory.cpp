#include<stdio.h>

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    /* Print the Addresses */
    for (i = 0; i < 10; i++)
    {
        printf("\nAddress of a[%d] : %p", i, (void *) &a[i]);
    }

    /* indicate success */
    return 0;
}
