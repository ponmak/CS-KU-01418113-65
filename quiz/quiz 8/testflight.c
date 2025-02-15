#include <stdio.h>

// union house
// {
//     int num_doors;
//     int num_windows;
// };

// int main()
// {
//     union house h;
//     h.num_doors = 8;
//     h.num_windows = 3;
//     printf("%d %d\n", h.num_doors, h.num_windows);
//     return 0;
// }

struct package {
    unsigned int source :3;
    unsigned int ark : 1;
    unsigned int fin : 2;
};

int main()
{
    struct package p;
    printf("%d\n", sizeof(p));
    p.source = 7;
    p.ark = 0;
    p.fin = 3;
    printf("%d %d %d\n", p.source, p.ark, p.fin);
    return 0;
}