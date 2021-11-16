/**
 * creating a pointer to a function, we use the following syntax.
 * Here is a general prototype:
 * 
 * 
 * return_type func_name(type (pointer to func)(type of param), type variable, ...);
 * 
 * 
 **/

double intergrate(double (*f) (double), double a, double b);

//paranthesis around *f indicates that f is a pointer to a func and not a func that
//returns a pointer.