enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void){
    int x, y;

    switch (direction){
        case 0:
            y--;
            break;
        case 1:
            y++;
            break;
        case 2:
            x++;
            break;
        case 3:
            x--;
            break;
        default:
            break;
    }
}