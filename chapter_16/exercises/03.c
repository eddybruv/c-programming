#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex c1, c2, c3;

struct complex make_complex(double i, double j){
    struct complex c4;
    
    c4.real = i;
    c4.imaginary = j;

    return c4;
}

struct complex add_complex(struct complex p1, struct complex p2){
    struct complex p3;

    p3.real = p1.real + p2.real;
    p3.imaginary = p1.imaginary + p2.imaginary;

    return p3;
}