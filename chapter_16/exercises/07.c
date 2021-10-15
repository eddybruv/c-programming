struct fraction {
    int numerator, denominator;
};

struct fraction reduce(struct fraction f){
    
    while(f.denominator > 0){
        int r = f.numerator % f.denominator;
        f.numerator = f.denominator;
        f.denominator = r;
    }

    return f;
}

struct fraction add(struct fraction f1, struct fraction f2){
    
    struct fraction f3;
    f3.denominator = f1.denominator * f2.denominator;
    f3.numerator =  (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);

    reduce(f3);
    return f3;
}

struct fraction sub(struct fraction f1, struct fraction f2){
    
    struct fraction f3;
    f3.denominator = f1.denominator * f2.denominator;
    f3.numerator =  (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);

    reduce(f3);
    return f3;   
}

struct fraction mult(struct fraction f1, struct fraction f2){

    struct fraction f3;
    f3.denominator = f1.denominator * f2.denominator;
    f3.numerator = f1.numerator * f2.numerator;

    reduce(f3);
    return f3;
}

struct fraction mult(struct fraction f1, struct fraction f2){

    struct fraction f3;
    int temp = f2.numerator;
    f2.numerator = f2.denominator;
    f2.denominator = temp;
    
    f3.denominator = f1.denominator * f2.denominator;
    f3.numerator = f1.numerator * f2.numerator;

    reduce(f3);
    return f3;
}