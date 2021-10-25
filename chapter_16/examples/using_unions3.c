#define INT_KIND 0
#define DOUBLE_KIND 1

typedef struct {
    int kind;
    union {
        int i;
        double d;
    } u;
}Number;

void print_number (Number n);

int main(void){
    Number n;
    
    n.kind = INT_KIND;
    n.u.i = 54;

    print_number (n);
    return 0;
}

void print_number(Number n){
    if(n.kind == INT_KIND)
        printf("%d", n.u.i);
    else 
        printf("%g", n.u.d);
}