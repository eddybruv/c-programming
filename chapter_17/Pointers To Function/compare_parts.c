/**
 * algorithms of writing a comparr function for the inventory program.
 * the goal is to write a function that'll be useful to the qsort function.
 **/

struct part {
    int number;
    int on_hand;
    char *name[10];
    struct part *next;
};

int compare_parts(const void *p, const void *q)
{
    //we use const to avoid getting compiler warnings.
    const struct part *p1 = p;
    const struct part *p2 = q;

    if(p1->number < p2->number)
        return -1;
    
    else if(p1->number > p2->number)
        return 1;
    else 
        return 0;
}

/**
 * We can replace p1 and p2 by cast expressions.
 **/

int compareParts(const void *p, const void *q){
    if (((struct part *) p)->number <
        ((struct part *) q)->number)
        return -1;
    
    else if (((struct part *) p)->number ==
        ((struct part *) q)->number)
        return 0;

    else 
        return 1;
}

//we could make de fxn even shorter by removing the if statements

int compare_Parts(const void *p, const void *q){
    return ((struct part *) p)->number -((struct part *) q)->number;
        
}

// to sort by name, we could use strcmp 