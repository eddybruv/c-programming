#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int area(struct rectangle r1){
    int length = abs(r1.upper_left.x - r1.lower_right.x);
    int width = abs(r1.upper_left.y - r1.lower_right.y);

    return length * width;
}

struct point center(struct rectangle r1){
    struct point center_point;
    center_point.x = (r1.upper_left.x + r1.lower_right.x) / 2;
    center_point.y = (r1.upper_left.y + r1.lower_right.y) / 2;

    return center_point;
}

struct rectangle move(struct rectangle r1, int x, int y)
{
    r1.upper_left.x += x;
    r1.lower_right.x += x;
    r1.upper_left.y += y;
    r1.lower_right.y += y;

    return r1;
}

bool inIt(struct rectangle r1, struct point p1){
    if (p1.x < r1.upper_left.x &&
        p1.x > r1.lower_right.x &&
        p1.y < r1.upper_left.y &&
        p1.y > r1.lower_right.y)
            return true;

    return false;
}