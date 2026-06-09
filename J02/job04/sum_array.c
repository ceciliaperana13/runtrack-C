//sum sans arri[i]

int sum_array(int *arr, int n)
{
    int sum = 0;
    int i = 0;

    while (i < n)
    {
        sum += *(arr + i);  // pas de arr[i]
        i++;
    }
    return sum;
}
