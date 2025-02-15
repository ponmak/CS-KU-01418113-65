// 03 หาค่า cross product ระหว่าง 2 เวคเตอร์
#include <stdio.h>

struct vector {
  
    float x;
    float y;
    float z;

};

int main()
{
  
    struct vector u;
    struct vector v;
    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);

    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);

    float dot_x = (u.y * v.z) - (u.z * v.y);
    float dot_y = (u.z * v.x) - (u.x * v.z);
    float dot_z = (u.x * v.y) - (u.y * v.x);

    printf("u x v = %.1f %.1f %.1f", dot_x, dot_y, dot_z);
    
    return 0;


  return 0;
}