
int sum_array(const int a[], int n)
{
    a[] = {1, 2, 3, 4, 5};
    int *p = &a[0], sum = 0;
    for(p = a;p < a + n; p++)
        sum += *p;
    return sum;
}