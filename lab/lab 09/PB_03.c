// 03 Struct ที่เก็บพิกัดของจุด และหาระยะทาง
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    double X;
    double Y;
};

int main(int argc, char const *argv[]) {

    int n;
    printf("Number of Points: ");
    scanf("%d", &n);

    struct Point points[n];

    for (int i = 0; i < n; i++){
        printf("P%d.X: ", i+1);
        scanf("%lf", &points[i].X);

        printf("P%d.Y: ",i+1);
        scanf("%lf", &points[i].Y);
    }

    printf("Length:\n");
    for (int i = 0; i < n-1; i++){
        double length = sqrt(pow(points[i].X - points[i+1].X, 2) +  pow(points[i].Y - points[i+1].Y, 2));
        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", i+1, points[i].X, points[i].Y, i+2, points[i+1].X, points[i+1].Y, length);
    }


    return 0;
}
