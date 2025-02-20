// 06หาค่าผลบวกและผลคูณระหว่างจำนวนเชิงซ้อน 2 จำนวน

#include <stdio.h>

struct complex {
    float x;
    float y;
};

struct complex add_complex(struct complex f_complex, struct complex s_complex){
    struct complex add_number;

    add_number.x = f_complex.x + s_complex.x;
    add_number.y = f_complex.y + s_complex.y;

    return add_number;
}

struct complex multiply_complex(struct complex f_complex, struct complex s_complex){
    struct complex multiply_number;

    multiply_number.x = (f_complex.x * s_complex.x) - (f_complex.y * s_complex.y);
    multiply_number.y = (f_complex.x * s_complex.y) + (f_complex.y * s_complex.x);

    return multiply_number;
}

void print_complex(char *string, struct complex f_complex){
    printf("%s", string);

    if (f_complex.y == 0) {
        printf("%.1f", f_complex.x);  
    } else if (f_complex.x == 0) {
        printf("%.1fi", f_complex.y);  
    } else {
        printf("%.1f %c %.1fi", f_complex.x, (f_complex.y > 0 ? '+' : '-'), (f_complex.y > 0 ? f_complex.y : -f_complex.y));
    }

    printf("\n");
}

int main(){
  
    struct complex C,D,E,F;
    
    printf("Enter C: ");
    scanf("%f %f", &C.x , &C.y);
    
    printf("Enter D: ");
    scanf("%f %f", &D.x , &D.y);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}
