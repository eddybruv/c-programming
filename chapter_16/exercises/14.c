#include <math.h>
#define PI 3.14159

struct point {
    int x, y;
}center;

struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int raduis;
        } circle;
    }u;
}s;

int area (struct shape s, int shape_kind){
    int area;
    if(shape_kind =  1){
        return s.u.rectangle.height * s.u.rectangle.width;
    }
    else
        return (PI * pow((double)s.u.circle.raduis, 2));
}

struct shape move(struct shape s, int x, int y){
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale(struct shape s, int shape_kind, int scale_value){
    if(shape_kind =  1){
        s.u.rectangle.height *= scale_value; 
        s.u.rectangle.width *= scale_value;
    }
    else
        s.u.circle.raduis *= scale_value;

    return s;
}