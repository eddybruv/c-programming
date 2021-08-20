/*Date: 20-08-2021
    by eddybruv
    */

int find_largest(int a[], int n)
{
    int i, max;

    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

/**
 * Suppose that we call find_largest as follows:
 * largest = find_largest(b, N);
 * */