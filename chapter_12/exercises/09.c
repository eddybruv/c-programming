double inner_product(const double *a, const double *b, int n)
{
   int sum = 0, *p, *q;
   for(p = a, q = b, p < a + n; p++)
    sum += (*p++ * *q++)
}