/*Date: 08-20-2021
    by eddybruv
    */
//Section 12.2

/**
 * Here are the new push and pop functions (updating the other 
 * stack functions is left as an exercise).
**/

int contents[10];
int *top_ptr = &contents[0];

void push(int i){
    if(is_full())
        stack_overflow();
    else    
        *top_ptr++ = i;
}

int pop(void)
{
    if(is_empty())
        stack_underflow();
    else 
        return *--top_ptr;
}

/**
 * Note that I've written *--top_ptr, not *top_ptr--, since I want pop to decrement top_ptr 
 * before fetching the value to which it points.
 * **/