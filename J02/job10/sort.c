int *sort_int(int *array)
{
    int i = 0;
    int j;
    int temp;

    // calcul de la taille (tableau terminé par 0)
    while (array[i] != 0)
        i++;

    // bubble sort
    for (int a = 0; a < i - 1; a++)
    {
        for (j = 0; j < i - a - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return array;
}
