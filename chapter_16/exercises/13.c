#define RECTANGLE 1
#define CIRCLE 0


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

int main(voidd){
    s.shape_kind = RECTANGLE;
    s.center.x = 10;                
    s.u.rectangle.height = 25;      //s.height = 25
    s.u.rectangle.width = 8;        //s.u.rectangle.width = 8
    s.u.circle.raduis = 5;          //s.u.circle = 5
    s.u.circle.raduis = 5;          //s.u.raduis = 5
}