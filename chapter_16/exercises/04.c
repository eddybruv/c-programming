#include <stdio.h>

typedef struct {
    double real, imaginary;
} complex;

complex c1, c2, c3;

complex complex_make (complex p1, complex p2){
    complex c4;

    c4.real = p1.real + p2.real;
    c4.imaginary = p1.imaginary + p2.imaginary;

    return c4;
}

complex complex_add(complex p1, complex p2){
    complex p3;

    p3.real = p1.real + p2.real;
    p3.imaginary = p1.imaginary + p2.imaginary;

    return p3;
}