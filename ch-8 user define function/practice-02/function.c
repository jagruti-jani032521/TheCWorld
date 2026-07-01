int arrayElementSum(int a[], int size) 
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    return sum;
}

int stringLength(char str[])
{
    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    return length;
}