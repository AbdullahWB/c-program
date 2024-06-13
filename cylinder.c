#include <stdio.h>

#define PI 3.1415926

double cylinder(double r, double h) {
    double result = PI * r * r * h;
    return result;
}

int main() {
    double h, r, v;
    printf("Enter radius and height: ");
    scanf("%lf %lf", &r, &h);
    v = cylinder(r, h);
    printf("Volume = %.3f\n", v);
    return 0;
}
