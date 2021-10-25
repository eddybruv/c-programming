typedef union {
    double d;
    int i;
} Number;

Number number_array[100];

int main(void){
    number_array[0].i = 5;
    number_array[1].d = 6.8998;    
}