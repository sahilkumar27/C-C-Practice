#include <stdio.h> 
int main() {
    int fig_code;
    float side, base, length, breadth, height, area, radius;
 
    printf("-------------------------\n");
    printf(" 1 --> Circle\n");
    printf(" 2 --> Rectangle\n");
    printf(" 3 --> Triangle\n");
    printf(" 4 --> Pallelogram\n");
    printf("-------------------------\n");
    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    switch(fig_code)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of a circle = %.3f\n", area);
        break;
    case 2:
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        printf("Area of a Reactangle = %.3f\n", area);
        break;
    case 3:
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of a Triangle = %.3f\n", area);
        break;
    case 4:
        printf("Enter base and height of the given Parallelogram: \n");
        scanf("%f %f", &base, &height);
        area = base * height;
        printf("Area of Parallelogram is: %.3f\n", area);
        break;
     default:
        printf("Error in figure code\n");
        break;
    }
    return 0;
}


