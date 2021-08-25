/*Date: 25-08-2021
    by eddybruv*/

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    int first = i2 + i4 + i6 + i8 + i10 + i12;
    int second =  i1 + i3 + i5 + i7 + i9 + i11;
    int check = (first * 3) + second;
    check = check - 1;
    check = check % 10;
    check = 9 - check;

    printf("Check digit: %d", check);
    return 0;
}