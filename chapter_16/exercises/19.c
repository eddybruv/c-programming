#define NAME_LEN 40

enum type_t {
    EM, 
    SS
};

typedef struct {
    char name[NAME_LEN + 1];
    int year;
    enum type_t t;         //EM: Electromechanical & SS: Solid State
    int players;
} pinball_machine;