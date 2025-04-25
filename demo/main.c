#include <stdio.h>
#include <stdlib.h>

#define PI 3.00
#define SQUARE(X) ((X) * (X))
#define MAX(a, b) ((a > b)? (a) : (b))
#define TO_STRING(x) #x
#define DISPLAY_INTEGER(x) printf(#x " = %d..!\n", x);
#define DISPLAY_FLOAT(x) printf(#x " = %.2f..!\n", x);
#define DISPLAY_ANY_VALUE(x, placeholder) printf(#x " = %" #placeholder "..!\n", x);
#define PRINT_LOCATION printf("At %s, and line %d \n", __FILE__, __LINE__);

int main()
{
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    printf("The area of the circle = %2lf \n", area);

    int num1 = 5, num2 = 20;
    int maxNum = MAX(num1, num2);
    printf("The max number = %d \n", maxNum);

    printf("%s \n", TO_STRING(hello there!));

    int num = 40;
    float num2 = 5.56;
    DISPLAY_INTEGER(num);
    DISPLAY_FLOAT(num2);
    DISPLAY_ANY_VALUE(num, d);
    DISPLAY_ANY_VALUE(num2, .2f);

    printf("The program was compiled on %s and  at %s \n", __DATE__, __TIME__);
    printf("The name of this file is %s \n", __FILE__);
    printf("We are on line %d \n", __LINE__);

    PRINT_LOCATION;

    return 0;
}
