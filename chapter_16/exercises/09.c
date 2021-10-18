#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue){
    struct color made;

    if(red < 0)
        red = 0;
    if(green < 0)
        green = 0;
    if(blue < 0)
        blue = 0;
    
    made.red = red;
    made.green = green;
    made.blue = blue;

    return made;
}

int getRed(struct color c){
    return c.red;
}

bool equal_color(struct color c1, struct color c2){
    if (c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue)
        return true;
    return false;
}

struct color brighter(struct color c)
{
    struct color c2;
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        c2.red = 3;
        c2.green = 3;
        c2.blue = 3;

        //return c2;
    }

    if(c.red > 0 && c.red < 3)
        c.red = 3;
    if(c.green > 0 && c.green < 3)
        c.green = 3;
    if(c.blue > 0 && c.blue < 3)
        c.blue = 3;

    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;

    if(c.red > 255)
        c.red = 255;
    if(c.green > 255)
        c.green = 255;
    if(c.blue > 255)
        c.blue = 255;

    return c;
}

struct color darker(struct color c){
    c.red *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;

    return c;
}