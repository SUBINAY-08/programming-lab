#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);
    double floorvalue = floor(num);
    double ceilvalue = ceil(num);
    printf("Number entered: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floorvalue);
    printf("Ceiling value: %.2lf\n", ceilvalue);
    return 0;
}