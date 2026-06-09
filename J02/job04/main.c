#include <stdio.h>

int sum_array(int *arr, int n);

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int result = sum_array(tab, 5);

    printf("Sum = %d\n", result);
    return 0;
}

//pour test
